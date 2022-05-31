// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GameRuleCommand : public Command {

#define AFTER_EXTRA
// Add Member There
public:
struct InitProxy {
    InitProxy() = delete;
    InitProxy(InitProxy const&) = delete;
    InitProxy(InitProxy const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULECOMMAND
public:
    class GameRuleCommand& operator=(class GameRuleCommand const &) = delete;
    GameRuleCommand(class GameRuleCommand const &) = delete;
    GameRuleCommand() = delete;
#endif

public:
    /*0*/ virtual ~GameRuleCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI static void setup(class CommandRegistry &, struct GameRuleCommand::InitProxy &&);

protected:

private:
    MCAPI void getGameRule(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI void setGameRule(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI static void createJsonIndex(std::string const &, class GameRule const &, class Json::Value &, std::string *);

};