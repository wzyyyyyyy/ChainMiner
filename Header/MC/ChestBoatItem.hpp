// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BoatItem.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ChestBoatItem : public BoatItem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHESTBOATITEM
public:
    class ChestBoatItem& operator=(class ChestBoatItem const &) = delete;
    ChestBoatItem(class ChestBoatItem const &) = delete;
    ChestBoatItem() = delete;
#endif


public:
    /*0*/ virtual ~ChestBoatItem();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*13*/ virtual void __unk_vfn_13();
    /*15*/ virtual void __unk_vfn_15();
    /*51*/ virtual void __unk_vfn_51();
    /*53*/ virtual void __unk_vfn_53();
    /*66*/ virtual void __unk_vfn_66();
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*75*/ virtual void __unk_vfn_75();
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*95*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*133*/ virtual enum ActorType _getActorType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHESTBOATITEM
#endif
    MCAPI ChestBoatItem(std::string const &, int, int);



};