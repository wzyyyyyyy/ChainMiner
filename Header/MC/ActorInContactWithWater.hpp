// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorInContactWithWater : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINCONTACTWITHWATER
public:
    class ActorInContactWithWater& operator=(class ActorInContactWithWater const &) = delete;
    ActorInContactWithWater(class ActorInContactWithWater const &) = delete;
    ActorInContactWithWater() = delete;
#endif


public:
    /*0*/ virtual ~ActorInContactWithWater();
    /*2*/ virtual bool evaluate(struct FilterContext const &) const;
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORINCONTACTWITHWATER
#endif



};