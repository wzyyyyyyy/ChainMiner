// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptActorComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AttributeScriptActorComponent : public ScriptActorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTESCRIPTACTORCOMPONENT
public:
    class AttributeScriptActorComponent& operator=(class AttributeScriptActorComponent const &) = delete;
    AttributeScriptActorComponent(class AttributeScriptActorComponent const &) = delete;
    AttributeScriptActorComponent() = delete;
#endif

public:
    /*0*/ virtual ~AttributeScriptActorComponent();
    /*4*/ virtual class Scripting::Result<float> getCurrent() const;
    /*5*/ virtual class Scripting::Result<void> setCurrent(float const &) const;
    /*6*/ virtual class Scripting::Result<float> getValue() const;
    MCAPI class Scripting::Result<void> resetToDefaultValue() const;
    MCAPI class Scripting::Result<void> resetToMaxValue() const;
    MCAPI class Scripting::Result<void> resetToMinValue() const;

protected:

private:

};