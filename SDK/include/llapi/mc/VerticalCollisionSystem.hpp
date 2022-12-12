/**
 * @file  VerticalCollisionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class VerticalCollisionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VERTICALCOLLISIONSYSTEM
public:
    class VerticalCollisionSystem& operator=(class VerticalCollisionSystem const &) = delete;
    VerticalCollisionSystem(class VerticalCollisionSystem const &) = delete;
    VerticalCollisionSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~VerticalCollisionSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?tick@VerticalCollisionSystem@@EEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UMinecartFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UVerticalCollisionFlag@@@@@@U?$Read@USynchedActorDataComponent@@UMoveRequestComponent@@UAABBShapeComponent@@UConstBlockSourceComponent@@UStateVectorComponent@@@@U?$Write@UStateVectorComponent@@UWalkDistComponent@@@@U?$AddRemove@UBounceComponent@@@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct MinecartFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct VerticalCollisionFlag>>, struct Read<struct SynchedActorDataComponent, struct MoveRequestComponent, struct AABBShapeComponent, struct ConstBlockSourceComponent, struct StateVectorComponent>, struct Write<struct StateVectorComponent, struct WalkDistComponent>, struct AddRemove<struct BounceComponent>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol ?create@VerticalCollisionSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol ?tickVerticalCollisionSystem@VerticalCollisionSystem@@SAXAEAVStrictEntityContext@@AEBUMoveRequestComponent@@AEBUAABBShapeComponent@@AEBUConstBlockSourceComponent@@AEBUStateVectorComponent@@AEAUWalkDistComponent@@AEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UMinecartFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UVerticalCollisionFlag@@@@@@U?$Read@USynchedActorDataComponent@@UMoveRequestComponent@@UAABBShapeComponent@@UConstBlockSourceComponent@@UStateVectorComponent@@@@U?$Write@UStateVectorComponent@@UWalkDistComponent@@@@U?$AddRemove@UBounceComponent@@@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
     */
    MCAPI static void tickVerticalCollisionSystem(class StrictEntityContext &, struct MoveRequestComponent const &, struct AABBShapeComponent const &, struct ConstBlockSourceComponent const &, struct StateVectorComponent const &, struct WalkDistComponent &, class StrictExecutionContext<struct Filter<class FlagComponent<struct MinecartFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct VerticalCollisionFlag>>, struct Read<struct SynchedActorDataComponent, struct MoveRequestComponent, struct AABBShapeComponent, struct ConstBlockSourceComponent, struct StateVectorComponent>, struct Write<struct StateVectorComponent, struct WalkDistComponent>, struct AddRemove<struct BounceComponent>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);

};