// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SerializerContext {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERIALIZERCONTEXT
public:
    class SerializerContext& operator=(class SerializerContext const &) = delete;
    SerializerContext(class SerializerContext const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERIALIZERCONTEXT
#endif
    MCAPI SerializerContext();
    MCAPI void clear();
    MCAPI void consumeContext(class SerializerContext &&);
    MCAPI class SerializerContext detachContext();
    MCAPI void error(std::string const &);
    MCAPI class SerializerContext & operator=(class SerializerContext &&);
    MCAPI void popContext();
    MCAPI class SerializerContext & pushContext(std::string const &);
    MCAPI ~SerializerContext();



};