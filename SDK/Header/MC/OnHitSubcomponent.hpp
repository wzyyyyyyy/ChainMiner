// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OnHitSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONHITSUBCOMPONENT
public:
    class OnHitSubcomponent& operator=(class OnHitSubcomponent const &) = delete;
    OnHitSubcomponent(class OnHitSubcomponent const &) = delete;
#endif

public:
    /*0*/ virtual ~OnHitSubcomponent();
    /*1*/ virtual void __unk_vfn_1() = 0;
    /*2*/ virtual void __unk_vfn_2() = 0;
    /*3*/ virtual void __unk_vfn_3() = 0;
    /*4*/ virtual char const * getName();
    /*
    inline  ~OnHitSubcomponent(){
         (OnHitSubcomponent::*rv)();
        *((void**)&rv) = dlsym("??1OnHitSubcomponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI OnHitSubcomponent();

protected:
    MCAPI bool _canAttack(class Actor *, class Actor *) const;

private:

};