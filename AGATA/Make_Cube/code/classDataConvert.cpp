// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME classDataConvert
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "Map.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *Map_Dictionary();
   static void Map_TClassManip(TClass*);
   static void *new_Map(void *p = 0);
   static void *newArray_Map(Long_t size, void *p);
   static void delete_Map(void *p);
   static void deleteArray_Map(void *p);
   static void destruct_Map(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Map*)
   {
      ::Map *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Map));
      static ::ROOT::TGenericClassInfo 
         instance("Map", "Map.h", 17,
                  typeid(::Map), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Map_Dictionary, isa_proxy, 4,
                  sizeof(::Map) );
      instance.SetNew(&new_Map);
      instance.SetNewArray(&newArray_Map);
      instance.SetDelete(&delete_Map);
      instance.SetDeleteArray(&deleteArray_Map);
      instance.SetDestructor(&destruct_Map);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Map*)
   {
      return GenerateInitInstanceLocal((::Map*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Map*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Map_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Map*)0x0)->GetClass();
      Map_TClassManip(theClass);
   return theClass;
   }

   static void Map_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_Map(void *p) {
      return  p ? new(p) ::Map : new ::Map;
   }
   static void *newArray_Map(Long_t nElements, void *p) {
      return p ? new(p) ::Map[nElements] : new ::Map[nElements];
   }
   // Wrapper around operator delete
   static void delete_Map(void *p) {
      delete ((::Map*)p);
   }
   static void deleteArray_Map(void *p) {
      delete [] ((::Map*)p);
   }
   static void destruct_Map(void *p) {
      typedef ::Map current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Map

namespace {
  void TriggerDictionaryInitialization_classDataConvert_Impl() {
    static const char* headers[] = {
"Map.h",
0
    };
    static const char* includePaths[] = {
"/home/ffzeng/disk1/root/include/",
"/home/ffzeng/disk1/AGATA/DATA/cube/cube_src_zeng/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "classDataConvert dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$Map.h")))  Map;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "classDataConvert dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Map.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Map", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("classDataConvert",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_classDataConvert_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_classDataConvert_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_classDataConvert() {
  TriggerDictionaryInitialization_classDataConvert_Impl();
}
