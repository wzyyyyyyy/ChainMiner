/**
 * @file  ArmorStandItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ArmorStandItem.
 *
 */
class ArmorStandItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORSTANDITEM
public:
    class ArmorStandItem& operator=(class ArmorStandItem const &) = delete;
    ArmorStandItem(class ArmorStandItem const &) = delete;
    ArmorStandItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ArmorStandItem();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  52
     * @symbol __unk_vfn_52
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @symbol __unk_vfn_73
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   -1863097830
     * @vftbl  135
     * @symbol ?_useOn@ArmorStandItem@@UEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @hash   369578925
     * @symbol ??0ArmorStandItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
     */
    MCAPI ArmorStandItem(std::string const &, short);
    /**
     * @symbol ?_shouldRemove@ArmorStandItem@@QEBA_NAEAVBlockSource@@VBlockPos@@@Z
     */
    MCAPI bool _shouldRemove(class BlockSource &, class BlockPos) const;

};