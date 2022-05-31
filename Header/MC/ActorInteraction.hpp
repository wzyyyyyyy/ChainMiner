// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorInteraction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINTERACTION
public:
    class ActorInteraction& operator=(class ActorInteraction const &) = delete;
    ActorInteraction(class ActorInteraction const &) = delete;
    ActorInteraction() = delete;
#endif

public:
    MCAPI ActorInteraction(bool);
    MCAPI void capture(class std::function<void (void)>);
    MCAPI std::string const & getInteractText() const;
    MCAPI void interact();
    MCAPI void setInteractText(std::string const &);
    MCAPI bool shouldCapture() const;
    MCAPI ~ActorInteraction();

protected:

private:

};