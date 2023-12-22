#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include"cube.h"
#include"ana.h"

using namespace std;

int main(int argc, char* argv[])
{
    Int_t jj,kk;
    Int_t run_num=0;
	char str_file_name[256]="mat";
    Int_t run_min,run_max;
	int cube_size=4096;

    //initial the data struct;
    run_min=atoi(argv[1]); 
    run_max=atoi(argv[2]); 
    sprintf(str_file_name,"mat_%d_%d.spn",run_min,run_max);
    mat=new Matrix(str_file_name,Mat_Energy_MAX);
    sprintf(str_file_name,"cub_%d_%d",run_min,run_max);
    cube=new Cube(str_file_name,"tests.tab",cube_size);
    num_2d=0;
    num_1d=0;


    for(run_num=run_min;run_num<=run_max;run_num++)
    {
//		if (run_num==106) continue;
//		if (run_num==162) continue;
//		if (run_num==161) continue;
//		if (run_num==231) continue;
//		if (run_num==233) continue;
        if(Sort_to_Tree(run_num)!=0)
        {
            printf("sort run%05d Int_to ana_tree error\n",run_num);
            continue;
        }
		
    }//end process all files
    
    
	printf("ele in matrix:%d\n",mat->ReadEle(500,500));
    mat->Save();
    cube->Save();
    delete mat;
    printf("total 2d num:%d\n",num_2d);
    printf("total 1d num:%d\n",num_1d);
    return 0;
}

