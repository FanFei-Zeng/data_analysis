#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "TFile.h"
#include "TMath.h"
#include "TTree.h"
#include "Map.h"
#include <matrix.h>
#include "cube.h"


Int_t Sort_to_Tree(Int_t runnum);

Float_t root_mat[2];

TTree *trigger_out1;
Matrix* mat;
Cube* cube;

int num_2d;
int num_1d;
#define Mat_Energy_MAX 4096.0
//convert the adc data Int_to mapping data
Int_t Sort_to_Tree(Int_t runnum)
{
	char str_filename[256];
	char name_string[256];
	Int_t Entry_Number;
	int i,j,k;

	TTree* trigger_in;
	sprintf(str_filename,"Tree_%04d.root",runnum);
	//open root file
	TFile* file_in=new TFile(str_filename);
	if(file_in->IsZombie())
	{
		printf("open file Tree_%04d.root fail!\n",runnum);
		delete file_in;
		return -1;
	}
	trigger_in=(TTree*)file_in->Get("TreeMaster");
	if(trigger_in==NULL)
	{
		printf("Get tree in file Tree_%04d.root error!\n ",runnum);
		delete file_in;
		return -2;
	}

	//output file and data structure
	Map* data_in=new Map(trigger_in);

	//start to get Data
	printf("====================\n");
	printf("start sort %s...\n",str_filename);
	Entry_Number=trigger_in->GetEntries();
	Int_t percent=0;
	int num=0;
	float Agata_E[100];

	for(i=0; i<Entry_Number; i++)
	{

		if(i>=0.1*percent*(Entry_Number)-1)
		{
			printf("%3.0f%% completed...\n",10.0*percent);
			percent++;
		}
		data_in->GetEntry(i);
		num=0;
		if(data_in->nbTrack > 1)
		{
			for(int index = 0; index < data_in->nbTrack; index++)
			{
				Agata_E[num]=data_in->trackE[index];
				if(Agata_E[num] > 0 && Agata_E[num] < Mat_Energy_MAX)
					num++;
			}
		}
		if(num>1)
		{
			mat->Fill(num,Agata_E); //for matrix, more details in the matrix.cpp
			cube->Fill(num,Agata_E); //for cube,more details in the cube.cpp
			num_2d+=num*(num-1)*2;
		}
		else
			num_1d++;
	}
	//finish sort
	file_in->Close();
	delete file_in;
	return 0;
}

