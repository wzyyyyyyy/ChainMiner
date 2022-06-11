// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ConditionalBandwidthOptimizationDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONDITIONALBANDWIDTHOPTIMIZATIONDEFINITION
public:
    class ConditionalBandwidthOptimizationDefinition& operator=(class ConditionalBandwidthOptimizationDefinition const &) = delete;
    ConditionalBandwidthOptimizationDefinition(class ConditionalBandwidthOptimizationDefinition const &) = delete;
    ConditionalBandwidthOptimizationDefinition() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONDITIONALBANDWIDTHOPTIMIZATIONDEFINITION
#endif
    MCAPI void addConditionalBandwidthOptimization(struct ConditionalBandwidthOptimization const &);
    MCAPI void addDefaultBandwidthOptimization(struct ConditionalBandwidthOptimization const &);
    MCAPI void initialize(class EntityContext &, class ConditionalBandwidthOptimizationComponent &) const;
    MCAPI ~ConditionalBandwidthOptimizationDefinition();
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ConditionalBandwidthOptimizationDefinition>> &);



};