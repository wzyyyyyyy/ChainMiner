// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorHistory {

#define AFTER_EXTRA
// Add Member There
public:
struct Snapshot {
    Snapshot() = delete;
    Snapshot(Snapshot const&) = delete;
    Snapshot(Snapshot const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHISTORY
public:
    class ActorHistory& operator=(class ActorHistory const &) = delete;
    ActorHistory(class ActorHistory const &) = delete;
    ActorHistory() = delete;
#endif

public:
    MCAPI bool addFrame(struct IActorMovementProxy &, unsigned __int64);
    MCAPI struct ActorHistory::Snapshot createSnapshot(struct IActorMovementProxy &) const;
    MCAPI ~ActorHistory();

protected:

private:

};