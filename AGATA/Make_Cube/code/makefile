ROOTCFLAGS  = $(shell root-config --cflags)
ROOTLIBS    = $(shell root-config --glibs)

SRC = $(wildcard *.cpp)
INCH = $(wildcard *.h)
OBJ = $(patsubst %.cpp,%.o,$(filter %.cpp,$(SRC)))
DEP = $(patsubst %.cpp,%.d,$(filter %.cpp,$(SRC)))
EXE = cube
ROOT_DICT=classDataConvert

#CFLAGS = -Wall -O2 -I. -fpermissive -DMYTEST=1
CFLAGS = -Wall -g -I. -fpermissive -DMYTEST=1

LIBS= -lrt    

ROOTCINT = rootcint -f
GXX = g++
GCC = gcc

all:$(EXE)

#for CentOs
#$(EXE): DIC $(OBJ) $(INCH)
#	$(GXX) $(CFLAGS) $(ROOTCFLAGS) $(ROOTLIBS) $(LIBS) -o $@ $(OBJ)

#for Ubuntu
$(EXE): DIC $(OBJ) $(INCH)
	$(GXX) -o $@ $(OBJ) $(CFLAGS) $(ROOTCFLAGS) $(ROOTLIBS) $(LIBS)
%.o:%.cpp 
	$(GXX) $(CFLAGS) $(ROOTCFLAGS) $(ROOTLIBS) -o $@ -c $< 

DIC:
	$(ROOTCINT) $(ROOT_DICT).cpp  -c Map.h classLinkDef.h

clean:
	rm -f *~ .*.cpp.*  *.d *.o $(EXE)

install:
	cp $(EXE) $(ROOT_DICT)_rdict.pcm ../
