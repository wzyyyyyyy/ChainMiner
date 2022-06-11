// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OcelotSitOnBlockGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCELOTSITONBLOCKGOAL
public:
    class OcelotSitOnBlockGoal& operator=(class OcelotSitOnBlockGoal const &) = delete;
    OcelotSitOnBlockGoal(class OcelotSitOnBlockGoal const &) = delete;
    OcelotSitOnBlockGoal() = delete;
#endif


public:
    /*0*/ virtual ~OcelotSitOnBlockGoal();
    /*1*/ virtual bool canUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*11*/ virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /*13*/ virtual bool _canReach(class BlockPos const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OCELOTSITONBLOCKGOAL
#endif
    MCAPI OcelotSitOnBlockGoal(class Mob &, float);



};