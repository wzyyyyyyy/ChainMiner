// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptBlockPlaceEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKPLACEEVENT
public:
    struct ScriptBlockPlaceEvent& operator=(struct ScriptBlockPlaceEvent const &) = delete;
    ScriptBlockPlaceEvent(struct ScriptBlockPlaceEvent const &) = delete;
    ScriptBlockPlaceEvent() = delete;
#endif

public:
    MCAPI ScriptBlockPlaceEvent(class Player &, class BlockPos const &, class Scripting::WeakLifetimeScope const &);
    MCAPI ~ScriptBlockPlaceEvent();

protected:

private:

};