/**
 * @file  CollisionBoxDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure CollisionBoxDefinition.
 *
 */
struct CollisionBoxDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COLLISIONBOXDEFINITION
public:
    struct CollisionBoxDefinition& operator=(struct CollisionBoxDefinition const &) = delete;
    CollisionBoxDefinition(struct CollisionBoxDefinition const &) = delete;
    CollisionBoxDefinition() = delete;
#endif

public:
    /**
     * @hash   1142818371
     * @symbol ?setHeight@CollisionBoxDefinition@@QEAAXAEBM@Z
     */
    MCAPI void setHeight(float const &);
    /**
     * @hash   425136015
     * @symbol ?setWidth@CollisionBoxDefinition@@QEAAXAEBM@Z
     */
    MCAPI void setWidth(float const &);
    /**
     * @hash   -1880112838
     * @symbol ?buildSchema@CollisionBoxDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UCollisionBoxDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct CollisionBoxDefinition>> &);
    /**
     * @hash   -34482577
     * @symbol ?mBoxEpsilon@CollisionBoxDefinition@@2MB
     */
    MCAPI static float const mBoxEpsilon;

};