// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GetChunkDataCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETCHUNKDATACOMMAND
public:
    class GetChunkDataCommand& operator=(class GetChunkDataCommand const &) = delete;
    GetChunkDataCommand(class GetChunkDataCommand const &) = delete;
    GetChunkDataCommand() = delete;
#endif

public:
    /*0*/ virtual ~GetChunkDataCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI static void setup(class CommandRegistry &);

protected:

private:

};