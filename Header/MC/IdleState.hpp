// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PetSleepWithOwnerState.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IdleState : public PetSleepWithOwnerState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDLESTATE
public:
    class IdleState& operator=(class IdleState const &) = delete;
    IdleState(class IdleState const &) = delete;
    IdleState() = delete;
#endif

public:
    /*0*/ virtual ~IdleState();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void start();
    /*
    inline void tick(){
        void (IdleState::*rv)();
        *((void**)&rv) = dlsym("?tick@IdleState@@UEAAXXZ");
        return (this->*rv)();
    }
    */
    MCAPI static std::unique_ptr<class IdleState> create(class PetSleepWithOwnerGoal &);

protected:

private:

};