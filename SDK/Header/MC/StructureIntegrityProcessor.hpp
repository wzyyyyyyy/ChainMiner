// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StructureIntegrityProcessor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREINTEGRITYPROCESSOR
public:
    class StructureIntegrityProcessor& operator=(class StructureIntegrityProcessor const &) = delete;
    StructureIntegrityProcessor(class StructureIntegrityProcessor const &) = delete;
    StructureIntegrityProcessor() = delete;
#endif

public:
    MCAPI StructureIntegrityProcessor(float, unsigned int);
    MCAPI std::vector<bool> generateFlagsForIndices(int, int) const;

protected:

private:

};