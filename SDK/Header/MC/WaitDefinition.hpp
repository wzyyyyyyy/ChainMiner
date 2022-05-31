// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WaitDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WAITDEFINITION
public:
    class WaitDefinition& operator=(class WaitDefinition const &) = delete;
    WaitDefinition(class WaitDefinition const &) = delete;
    WaitDefinition() = delete;
#endif

public:
    /*0*/ virtual ~WaitDefinition();
    /*1*/ virtual void load(class Json::Value, class BehaviorFactory const &);

protected:

private:

};