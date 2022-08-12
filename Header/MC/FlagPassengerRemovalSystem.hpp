// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FlagPassengerRemovalSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLAGPASSENGERREMOVALSYSTEM
public:
    class FlagPassengerRemovalSystem& operator=(class FlagPassengerRemovalSystem const &) = delete;
    FlagPassengerRemovalSystem(class FlagPassengerRemovalSystem const &) = delete;
    FlagPassengerRemovalSystem() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLAGPASSENGERREMOVALSYSTEM
#endif
    MCAPI static struct TickingSystemWithInfo createDeferredSystem();
    MCAPI static void tickDeferredPassengerRemoval(class StrictEntityContext const &, struct VehicleComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PendingRemovePassengersComponent>);



};