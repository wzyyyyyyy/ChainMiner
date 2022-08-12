// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "AbstractArrow.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ThrownTrident : public AbstractArrow {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THROWNTRIDENT
public:
    class ThrownTrident& operator=(class ThrownTrident const &) = delete;
    ThrownTrident(class ThrownTrident const &) = delete;
    ThrownTrident() = delete;
#endif


public:
    /*7*/ virtual void outOfWorld();
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~ThrownTrident();
    /*41*/ virtual void __unk_vfn_41();
    /*49*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*88*/ virtual void __unk_vfn_88();
    /*89*/ virtual void playerTouch(class Player &);
    /*96*/ virtual void __unk_vfn_96();
    /*99*/ virtual void __unk_vfn_99();
    /*106*/ virtual void __unk_vfn_106();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*111*/ virtual void __unk_vfn_111();
    /*130*/ virtual bool isEnchanted() const;
    /*150*/ virtual void despawn();
    /*182*/ virtual void __unk_vfn_182();
    /*196*/ virtual void __unk_vfn_196();
    /*222*/ virtual void __unk_vfn_222();
    /*223*/ virtual void __unk_vfn_223();
    /*248*/ virtual void __unk_vfn_248();
    /*251*/ virtual void __unk_vfn_251();
    /*269*/ virtual void __unk_vfn_269();
    /*270*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*273*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*274*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*277*/ virtual void __unk_vfn_277();
    /*285*/ virtual void __unk_vfn_285();
    /*286*/ virtual void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /*288*/ virtual class ItemStack _getPickupItem() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THROWNTRIDENT
#endif
    MCAPI ThrownTrident(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI class ItemStack getPickupItem() const;
    MCAPI void returnWithLoyalty(int);
    MCAPI void setTridentItem(class ItemStack const &);



};