/**
 * @file  PortalForcer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PortalForcer.
 *
 */
class PortalForcer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PORTALFORCER
public:
    class PortalForcer& operator=(class PortalForcer const &) = delete;
    PortalForcer(class PortalForcer const &) = delete;
    PortalForcer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PortalForcer();
    /**
     * @hash   844998263
     * @vftbl  1
     * @symbol ?deserialize@PortalForcer@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void deserialize(class CompoundTag const &);
    /**
     * @hash   243845720
     * @vftbl  2
     * @symbol ?serialize@PortalForcer@@UEBAXAEAVCompoundTag@@@Z
     */
    virtual void serialize(class CompoundTag &) const;
    /**
     * @hash   -1806366670
     * @symbol ??0PortalForcer@@QEAA@AEAVLevel@@@Z
     */
    MCAPI PortalForcer(class Level &);
    /**
     * @hash   -893404612
     * @symbol ?addPortalRecord@PortalForcer@@QEAAAEBVPortalRecord@@V?$AutomaticID@VDimension@@H@@AEBVPortalShape@@@Z
     */
    MCAPI class PortalRecord const & addPortalRecord(class AutomaticID<class Dimension, int>, class PortalShape const &);
    /**
     * @hash   -1022826089
     * @symbol ?addPortalRecord@PortalForcer@@QEAAAEBVPortalRecord@@V?$AutomaticID@VDimension@@H@@V2@@Z
     */
    MCAPI class PortalRecord const & addPortalRecord(class AutomaticID<class Dimension, int>, class PortalRecord);
    /**
     * @hash   1307073618
     * @symbol ?createPortal@PortalForcer@@QEAAAEBVPortalRecord@@AEBVActor@@H@Z
     */
    MCAPI class PortalRecord const & createPortal(class Actor const &, int);
    /**
     * @hash   -1141967168
     * @symbol ?findPortal@PortalForcer@@QEBA_NV?$AutomaticID@VDimension@@H@@AEBVBlockPos@@HAEAV3@@Z
     */
    MCAPI bool findPortal(class AutomaticID<class Dimension, int>, class BlockPos const &, int, class BlockPos &) const;
    /**
     * @hash   -1016210179
     * @symbol ?force@PortalForcer@@QEAAXAEAVActor@@AEBUDimensionTransitionComponent@@@Z
     */
    MCAPI void force(class Actor &, struct DimensionTransitionComponent const &);
    /**
     * @hash   826098702
     * @symbol ?portalRecordExists@PortalForcer@@QEBA_NV?$AutomaticID@VDimension@@H@@AEBVPortalRecord@@@Z
     */
    MCAPI bool portalRecordExists(class AutomaticID<class Dimension, int>, class PortalRecord const &) const;
    /**
     * @hash   25163404
     * @symbol ?removeMisalignedPortalRecords@PortalForcer@@QEAAXAEAVBlockSource@@AEBVPortalShape@@AEBVPortalRecord@@@Z
     */
    MCAPI void removeMisalignedPortalRecords(class BlockSource &, class PortalShape const &, class PortalRecord const &);
    /**
     * @hash   -633857553
     * @symbol ?removePortalRecord@PortalForcer@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void removePortalRecord(class BlockSource &, class BlockPos const &);
    /**
     * @hash   1341942083
     * @symbol ?PORTAL_FILE_ID@PortalForcer@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const PORTAL_FILE_ID;

//private:
    /**
     * @hash   -947879691
     * @symbol ?_findPortal@PortalForcer@@AEBA?AV?$optional@VPortalRecord@@@std@@V?$AutomaticID@VDimension@@H@@AEBVBlockPos@@HAEAV5@@Z
     */
    MCAPI class std::optional<class PortalRecord> _findPortal(class AutomaticID<class Dimension, int>, class BlockPos const &, int, class BlockPos &) const;

private:

};