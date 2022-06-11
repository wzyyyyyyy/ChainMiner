// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OcelotAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCELOTATTACKDEFINITION
public:
    class OcelotAttackDefinition& operator=(class OcelotAttackDefinition const &) = delete;
    OcelotAttackDefinition(class OcelotAttackDefinition const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OCELOTATTACKDEFINITION
#endif
    MCAPI OcelotAttackDefinition();
    MCAPI void initialize(class EntityContext &, class OcelotAttackGoal &);
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class OcelotAttackDefinition>> &);



};