// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FeedItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptFeedItemEffect {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTFEEDITEMEFFECT
public:
    class ScriptFeedItemEffect& operator=(class ScriptFeedItemEffect const &) = delete;
    ScriptFeedItemEffect(class ScriptFeedItemEffect const &) = delete;
    ScriptFeedItemEffect() = delete;
#endif

public:
    MCAPI static class Scripting::ClassBindingBuilder<struct FeedItem::Effect> bind(struct Scripting::Version);

protected:

private:

};