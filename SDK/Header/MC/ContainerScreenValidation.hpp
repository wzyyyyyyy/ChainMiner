// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ContainerScreenValidation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENVALIDATION
public:
    class ContainerScreenValidation& operator=(class ContainerScreenValidation const &) = delete;
    ContainerScreenValidation(class ContainerScreenValidation const &) = delete;
    ContainerScreenValidation() = delete;
#endif

public:
    /*0*/ virtual ~ContainerScreenValidation();
    /*1*/ virtual struct ContainerValidationResult tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs>);
    /*2*/ virtual struct ContainerValidationCraftResult getCraftResults(std::unique_ptr<struct ContainerValidationCraftInputs>);
    /*
    inline struct ContainerValidationResult tryActivate(){
        struct ContainerValidationResult (ContainerScreenValidation::*rv)();
        *((void**)&rv) = dlsym("?tryActivate@ContainerScreenValidation@@UEAA?AUContainerValidationResult@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ContainerScreenValidation(class ContainerScreenContext const &, enum ContainerValidationCaller, class std::unordered_map<enum ContainerEnumName, class std::shared_ptr<class Container>, struct std::hash<enum ContainerEnumName>, struct std::equal_to<enum ContainerEnumName>, class std::allocator<struct std::pair<enum ContainerEnumName const, class std::shared_ptr<class Container>>>>);
    MCAPI class std::shared_ptr<class SimpleSparseContainer> getOrCreateSparseContainer(enum ContainerEnumName);
    MCAPI bool isCraftingImplemented();
    MCAPI bool tryCommitActionResults();
    MCAPI struct ContainerValidationResult tryConsume(struct ContainerValidationSlotData const &, int);
    MCAPI struct ContainerValidationResult tryDestroy(struct ContainerValidationSlotData const &, int);
    MCAPI struct ContainerValidationResult tryDrop(struct ContainerValidationSlotData const &, int, bool);
    MCAPI struct ContainerValidationResult tryPlaceInItemContainer(struct ContainerValidationSlotData const &, int);
    MCAPI struct ContainerValidationResult trySwap(struct ContainerValidationSlotData const &, struct ContainerValidationSlotData const &);
    MCAPI struct ContainerValidationResult tryTransfer(struct ContainerValidationSlotData const &, struct ContainerValidationSlotData const &, int, bool);
    MCAPI static std::unique_ptr<class ContainerScreenValidation> makeContainerScreenValidation(class ContainerScreenContext const &, enum ContainerValidationCaller, class std::unordered_map<enum ContainerEnumName, class std::shared_ptr<class Container>, struct std::hash<enum ContainerEnumName>, struct std::equal_to<enum ContainerEnumName>, class std::allocator<struct std::pair<enum ContainerEnumName const, class std::shared_ptr<class Container>>>>);

protected:
    MCAPI struct ContainerValidationSlotInfo _createContainerValidatorSlotInfo(struct ContainerValidationSlotData const &);
    MCAPI int _tryAddItem(struct ContainerValidationSlotInfo &, int, bool);
    MCAPI class ItemStack _tryRemoveItem(struct ContainerValidationSlotInfo &, int);
    MCAPI int _trySetItem(struct ContainerValidationSlotInfo &, class ItemStack const &, bool, bool);
    MCAPI struct ContainerValidationResult _tryTransferSpecial(struct ContainerValidationSlotData const &, int, enum ContainerScreenRequestActionType);

private:
    MCAPI void _commit();
    MCAPI class std::shared_ptr<class ContainerValidationBase const> _getOrCreateContainerValidator(enum ContainerEnumName);
    MCAPI bool _propagateContainers();

};