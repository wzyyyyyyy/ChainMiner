// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct LegacyPackIdVersion {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYPACKIDVERSION
public:
    struct LegacyPackIdVersion& operator=(struct LegacyPackIdVersion const &) = delete;
    LegacyPackIdVersion(struct LegacyPackIdVersion const &) = delete;
    LegacyPackIdVersion() = delete;
#endif

public:
    MCAPI LegacyPackIdVersion(std::string const &, std::string const &);
    MCAPI struct PackIdVersion getUpgradedPackId() const;
    MCAPI ~LegacyPackIdVersion();

protected:

private:

};