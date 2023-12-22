//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Dec 19 21:19:54 2023 by ROOT version 6.22/02
// from TTree TreeMaster/TreeMaster
// found on file: Tree_0000.root
//////////////////////////////////////////////////////////

#ifndef Map_h
#define Map_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class Map {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           nbHits;
   Float_t         hitT[53];   //[nbHits]
   Float_t         hitE[53];   //[nbHits]
   Float_t         hitX[53];   //[nbHits]
   Float_t         hitY[53];   //[nbHits]
   Float_t         hitZ[53];   //[nbHits]
   Float_t         hitGX[53];   //[nbHits]
   Float_t         hitGY[53];   //[nbHits]
   Float_t         hitGZ[53];   //[nbHits]
   Int_t           hitId[53];   //[nbHits]
   Int_t           hitSg[53];   //[nbHits]
   Int_t           nbCores;
   Int_t           nbHitsperCry[20];   //[nbCores]
   Int_t           coreId[20];   //[nbCores]
   Float_t         coreE0[20];   //[nbCores]
   Float_t         coreE1[20];   //[nbCores]
   Float_t         coreT0[20];   //[nbCores]
   ULong64_t       coreTS[20];   //[nbCores]
   Int_t           nbAdd;
   Int_t           AddId[11];   //[nbAdd]
   Float_t         AddE[11];   //[nbAdd]
   Float_t         AddX[11];   //[nbAdd]
   Float_t         AddY[11];   //[nbAdd]
   Float_t         AddZ[11];   //[nbAdd]
   ULong64_t       AddTS[11];   //[nbAdd]
   ULong64_t       TSHit;
   Int_t           nbTrack;
   Float_t         trackE[16];   //[nbTrack]
   Float_t         trackX1[16];   //[nbTrack]
   Float_t         trackY1[16];   //[nbTrack]
   Float_t         trackZ1[16];   //[nbTrack]
   Float_t         trackhitE1[16];   //[nbTrack]
   Float_t         trackX2[16];   //[nbTrack]
   Float_t         trackY2[16];   //[nbTrack]
   Float_t         trackZ2[16];   //[nbTrack]
   Float_t         trackhitE2[16];   //[nbTrack]
   Int_t           tracknbHits[16];   //[nbTrack]
   Int_t           trackType[16];   //[nbTrack]
   Float_t         trackFOM[16];   //[nbTrack]
   Float_t         trackT[16];   //[nbTrack]
   Int_t           trackCrystalID[16];   //[nbTrack]
   ULong64_t       TStrack;
   Int_t           nbEUCLIDES;
   UShort_t        EUCLIDESBoard[1];   //[nbEUCLIDES]
   UShort_t        EUCLIDESChannel[1];   //[nbEUCLIDES]
   Float_t         EUCLIDESEnergy[1];   //[nbEUCLIDES]
   Float_t         EUCLIDESTime[1];   //[nbEUCLIDES]
   ULong64_t       TSEUCLIDES_Hit[1];   //[nbEUCLIDES]
   ULong64_t       TSEUCLIDES;
   Int_t           nbLABR;
   UShort_t        LABRBoard[1];   //[nbLABR]
   UShort_t        LABRChannel[1];   //[nbLABR]
   Float_t         LABREnergy[1];   //[nbLABR]
   Float_t         LABRQshort[1];   //[nbLABR]
   Float_t         LABRTime[1];   //[nbLABR]
   ULong64_t       TSLABR_Hit[1];   //[nbLABR]
   ULong64_t       TSLABR;

   // List of branches
   TBranch        *b_nbHits;   //!
   TBranch        *b_hitT;   //!
   TBranch        *b_hitE;   //!
   TBranch        *b_hitX;   //!
   TBranch        *b_hitY;   //!
   TBranch        *b_hitZ;   //!
   TBranch        *b_hitGX;   //!
   TBranch        *b_hitGY;   //!
   TBranch        *b_hitGZ;   //!
   TBranch        *b_hitId;   //!
   TBranch        *b_hitSg;   //!
   TBranch        *b_nbCores;   //!
   TBranch        *b_nbHitsperCry;   //!
   TBranch        *b_coreId;   //!
   TBranch        *b_coreE0;   //!
   TBranch        *b_coreE1;   //!
   TBranch        *b_coreT0;   //!
   TBranch        *b_coreTS;   //!
   TBranch        *b_nbAdd;   //!
   TBranch        *b_AddId;   //!
   TBranch        *b_AddE;   //!
   TBranch        *b_AddX;   //!
   TBranch        *b_AddY;   //!
   TBranch        *b_AddZ;   //!
   TBranch        *b_AddTS;   //!
   TBranch        *b_TSHit;   //!
   TBranch        *b_nbTrack;   //!
   TBranch        *b_trackE;   //!
   TBranch        *b_trackX1;   //!
   TBranch        *b_trackY1;   //!
   TBranch        *b_trackZ1;   //!
   TBranch        *b_trackhitE1;   //!
   TBranch        *b_trackX2;   //!
   TBranch        *b_trackY2;   //!
   TBranch        *b_trackZ2;   //!
   TBranch        *b_trackhitE2;   //!
   TBranch        *b_tracknbHits;   //!
   TBranch        *b_trackType;   //!
   TBranch        *b_trackFOM;   //!
   TBranch        *b_trackT;   //!
   TBranch        *b_trackCrystalID;   //!
   TBranch        *b_TStrack;   //!
   TBranch        *b_nbEUCLIDES;   //!
   TBranch        *b_EUCLIDESBoard;   //!
   TBranch        *b_EUCLIDESChannel;   //!
   TBranch        *b_EUCLIDESEnergy;   //!
   TBranch        *b_EUCLIDESTime;   //!
   TBranch        *b_TSEUCLIDES_Hit;   //!
   TBranch        *b_TSEUCLIDES;   //!
   TBranch        *b_nbLABR;   //!
   TBranch        *b_LABRBoard;   //!
   TBranch        *b_LABRChannel;   //!
   TBranch        *b_LABREnergy;   //!
   TBranch        *b_LABRQshort;   //!
   TBranch        *b_LABRTime;   //!
   TBranch        *b_TSLABR_Hit;   //!
   TBranch        *b_TSLABR;   //!

   Map(TTree *tree=0);
   virtual ~Map();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Map_cxx
Map::Map(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Tree_0000.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("Tree_0000.root");
      }
      f->GetObject("TreeMaster",tree);

   }
   Init(tree);
}

Map::~Map()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Map::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Map::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Map::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("nbHits", &nbHits, &b_nbHits);
   fChain->SetBranchAddress("hitT", hitT, &b_hitT);
   fChain->SetBranchAddress("hitE", hitE, &b_hitE);
   fChain->SetBranchAddress("hitX", hitX, &b_hitX);
   fChain->SetBranchAddress("hitY", hitY, &b_hitY);
   fChain->SetBranchAddress("hitZ", hitZ, &b_hitZ);
   fChain->SetBranchAddress("hitGX", hitGX, &b_hitGX);
   fChain->SetBranchAddress("hitGY", hitGY, &b_hitGY);
   fChain->SetBranchAddress("hitGZ", hitGZ, &b_hitGZ);
   fChain->SetBranchAddress("hitId", hitId, &b_hitId);
   fChain->SetBranchAddress("hitSg", hitSg, &b_hitSg);
   fChain->SetBranchAddress("nbCores", &nbCores, &b_nbCores);
   fChain->SetBranchAddress("nbHitsperCry", nbHitsperCry, &b_nbHitsperCry);
   fChain->SetBranchAddress("coreId", coreId, &b_coreId);
   fChain->SetBranchAddress("coreE0", coreE0, &b_coreE0);
   fChain->SetBranchAddress("coreE1", coreE1, &b_coreE1);
   fChain->SetBranchAddress("coreT0", coreT0, &b_coreT0);
   fChain->SetBranchAddress("coreTS", coreTS, &b_coreTS);
   fChain->SetBranchAddress("nbAdd", &nbAdd, &b_nbAdd);
   fChain->SetBranchAddress("AddId", AddId, &b_AddId);
   fChain->SetBranchAddress("AddE", AddE, &b_AddE);
   fChain->SetBranchAddress("AddX", AddX, &b_AddX);
   fChain->SetBranchAddress("AddY", AddY, &b_AddY);
   fChain->SetBranchAddress("AddZ", AddZ, &b_AddZ);
   fChain->SetBranchAddress("AddTS", AddTS, &b_AddTS);
   fChain->SetBranchAddress("TSHit", &TSHit, &b_TSHit);
   fChain->SetBranchAddress("nbTrack", &nbTrack, &b_nbTrack);
   fChain->SetBranchAddress("trackE", trackE, &b_trackE);
   fChain->SetBranchAddress("trackX1", trackX1, &b_trackX1);
   fChain->SetBranchAddress("trackY1", trackY1, &b_trackY1);
   fChain->SetBranchAddress("trackZ1", trackZ1, &b_trackZ1);
   fChain->SetBranchAddress("trackhitE1", trackhitE1, &b_trackhitE1);
   fChain->SetBranchAddress("trackX2", trackX2, &b_trackX2);
   fChain->SetBranchAddress("trackY2", trackY2, &b_trackY2);
   fChain->SetBranchAddress("trackZ2", trackZ2, &b_trackZ2);
   fChain->SetBranchAddress("trackhitE2", trackhitE2, &b_trackhitE2);
   fChain->SetBranchAddress("tracknbHits", tracknbHits, &b_tracknbHits);
   fChain->SetBranchAddress("trackType", trackType, &b_trackType);
   fChain->SetBranchAddress("trackFOM", trackFOM, &b_trackFOM);
   fChain->SetBranchAddress("trackT", trackT, &b_trackT);
   fChain->SetBranchAddress("trackCrystalID", trackCrystalID, &b_trackCrystalID);
   fChain->SetBranchAddress("TStrack", &TStrack, &b_TStrack);
   fChain->SetBranchAddress("nbEUCLIDES", &nbEUCLIDES, &b_nbEUCLIDES);
   fChain->SetBranchAddress("EUCLIDESBoard", &EUCLIDESBoard, &b_EUCLIDESBoard);
   fChain->SetBranchAddress("EUCLIDESChannel", &EUCLIDESChannel, &b_EUCLIDESChannel);
   fChain->SetBranchAddress("EUCLIDESEnergy", &EUCLIDESEnergy, &b_EUCLIDESEnergy);
   fChain->SetBranchAddress("EUCLIDESTime", &EUCLIDESTime, &b_EUCLIDESTime);
   fChain->SetBranchAddress("TSEUCLIDES_Hit", &TSEUCLIDES_Hit, &b_TSEUCLIDES_Hit);
   fChain->SetBranchAddress("TSEUCLIDES", &TSEUCLIDES, &b_TSEUCLIDES);
   fChain->SetBranchAddress("nbLABR", &nbLABR, &b_nbLABR);
   fChain->SetBranchAddress("LABRBoard", &LABRBoard, &b_LABRBoard);
   fChain->SetBranchAddress("LABRChannel", &LABRChannel, &b_LABRChannel);
   fChain->SetBranchAddress("LABREnergy", &LABREnergy, &b_LABREnergy);
   fChain->SetBranchAddress("LABRQshort", &LABRQshort, &b_LABRQshort);
   fChain->SetBranchAddress("LABRTime", &LABRTime, &b_LABRTime);
   fChain->SetBranchAddress("TSLABR_Hit", &TSLABR_Hit, &b_TSLABR_Hit);
   fChain->SetBranchAddress("TSLABR", &TSLABR, &b_TSLABR);
   Notify();
}

Bool_t Map::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Map::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Map::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Map_cxx
