// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChunkBuildOrderPolicyBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBUILDORDERPOLICYBASE
public:
    class ChunkBuildOrderPolicyBase& operator=(class ChunkBuildOrderPolicyBase const &) = delete;
    ChunkBuildOrderPolicyBase(class ChunkBuildOrderPolicyBase const &) = delete;
    ChunkBuildOrderPolicyBase() = delete;
#endif

public:
    /*0*/ virtual ~ChunkBuildOrderPolicyBase();
    /*
    inline unsigned int registerForUpdates(){
        unsigned int (ChunkBuildOrderPolicyBase::*rv)();
        *((void**)&rv) = dlsym("?registerForUpdates@ChunkBuildOrderPolicyBase@@UEAAIXZ");
        return (this->*rv)();
    }
    inline  ~ChunkBuildOrderPolicyBase(){
         (ChunkBuildOrderPolicyBase::*rv)();
        *((void**)&rv) = dlsym("??1ChunkBuildOrderPolicyBase@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};