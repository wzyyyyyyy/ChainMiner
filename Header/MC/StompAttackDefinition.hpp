// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StompAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOMPATTACKDEFINITION
public:
    class StompAttackDefinition& operator=(class StompAttackDefinition const &) = delete;
    StompAttackDefinition(class StompAttackDefinition const &) = delete;
#endif

public:
    /*0*/ virtual ~StompAttackDefinition();
    MCAPI StompAttackDefinition();
    MCAPI void initialize(class EntityContext &, class StompAttackGoal &);
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class StompAttackDefinition>> &);

protected:

private:

};