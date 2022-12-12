/**
 * @file  OpenDoorGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OpenDoorGoal.
 *
 */
class OpenDoorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPENDOORGOAL
public:
    class OpenDoorGoal& operator=(class OpenDoorGoal const &) = delete;
    OpenDoorGoal(class OpenDoorGoal const &) = delete;
    OpenDoorGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OpenDoorGoal();
    /**
     * @hash   -363962299
     * @vftbl  1
     * @symbol ?canUse@OpenDoorGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -302207885
     * @vftbl  2
     * @symbol ?canContinueToUse@OpenDoorGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   879840686
     * @vftbl  4
     * @symbol ?start@OpenDoorGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   985054590
     * @vftbl  5
     * @symbol ?stop@OpenDoorGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1600049513
     * @vftbl  6
     * @symbol ?tick@OpenDoorGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -2036140533
     * @vftbl  7
     * @symbol ?appendDebugInfo@OpenDoorGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -618091069
     * @symbol ??0OpenDoorGoal@@QEAA@AEAVMob@@_N@Z
     */
    MCAPI OpenDoorGoal(class Mob &, bool);

};