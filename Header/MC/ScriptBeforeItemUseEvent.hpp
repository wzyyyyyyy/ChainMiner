// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptBeforeItemUseEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBEFOREITEMUSEEVENT
public:
    struct ScriptBeforeItemUseEvent& operator=(struct ScriptBeforeItemUseEvent const &) = delete;
    ScriptBeforeItemUseEvent(struct ScriptBeforeItemUseEvent const &) = delete;
    ScriptBeforeItemUseEvent() = delete;
#endif

public:
    MCAPI ScriptBeforeItemUseEvent(class Scripting::StrongTypedObjectHandle<class ScriptItemStack>, struct ItemUseEvent &, class Scripting::WeakLifetimeScope const &);

protected:

private:

};