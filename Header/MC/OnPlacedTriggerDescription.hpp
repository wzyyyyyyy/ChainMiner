// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OnPlacedTriggerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONPLACEDTRIGGERDESCRIPTION
public:
    class OnPlacedTriggerDescription& operator=(class OnPlacedTriggerDescription const &) = delete;
    OnPlacedTriggerDescription(class OnPlacedTriggerDescription const &) = delete;
    OnPlacedTriggerDescription() = delete;
#endif


public:
    /*0*/ virtual ~OnPlacedTriggerDescription();
    /*1*/ virtual std::string const & getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONPLACEDTRIGGERDESCRIPTION
#endif
    MCAPI static std::string const NameID;



};