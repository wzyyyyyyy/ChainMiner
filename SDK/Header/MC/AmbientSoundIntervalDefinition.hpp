// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct AmbientSoundIntervalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMBIENTSOUNDINTERVALDEFINITION
public:
    struct AmbientSoundIntervalDefinition& operator=(struct AmbientSoundIntervalDefinition const &) = delete;
    AmbientSoundIntervalDefinition(struct AmbientSoundIntervalDefinition const &) = delete;
    AmbientSoundIntervalDefinition() = delete;
#endif

public:
    MCAPI void addDynamic(struct DynamicAmbientSound const &);
    MCAPI void initialize(class EntityContext &, class AmbientSoundServerComponent &);

protected:

private:

};