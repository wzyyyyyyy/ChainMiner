// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FireBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREBLOCK
public:
    class FireBlock& operator=(class FireBlock const &) = delete;
    FireBlock(class FireBlock const &) = delete;
    FireBlock() = delete;
#endif


public:
    /*0*/ virtual ~FireBlock();
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*19*/ virtual void __unk_vfn_19();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual void __unk_vfn_42();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual void __unk_vfn_49();
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual void __unk_vfn_60();
    /*61*/ virtual bool canContainLiquid() const;
    /*67*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*73*/ virtual void __unk_vfn_73();
    /*80*/ virtual void __unk_vfn_80();
    /*87*/ virtual bool mayPick() const;
    /*90*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*98*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*100*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*105*/ virtual void __unk_vfn_105();
    /*113*/ virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*148*/ virtual void __unk_vfn_148();
    /*152*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*157*/ virtual void __unk_vfn_157();
    /*168*/ virtual void __unk_vfn_168();
    /*169*/ virtual void __unk_vfn_169();
    /*170*/ virtual void __unk_vfn_170();
    /*171*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*174*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*177*/ virtual void __unk_vfn_177();
    /*188*/ virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIREBLOCK
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    MCAPI FireBlock(std::string const &, int);
    MCAPI void checkBurn(class BlockSource &, class BlockPos const &, int, class Randomize &, int) const;
    MCAPI static bool isSolidToppedBlock(class BlockSource &, class BlockPos const &);

//private:
    MCAPI void _tryAddToTickingQueue(class BlockSource &, class BlockPos const &, class Random &) const;
    MCAPI bool _trySpawnBlueFire(class BlockSource &, class BlockPos const &) const;
    MCAPI float getFireOdds(class BlockSource &, class BlockPos const &) const;
    MCAPI bool isValidFireLocation(class BlockSource &, class BlockPos const &) const;


private:


};