// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VinesSingleFaceFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VINESSINGLEFACEFEATURE
public:
    class VinesSingleFaceFeature& operator=(class VinesSingleFaceFeature const &) = delete;
    VinesSingleFaceFeature(class VinesSingleFaceFeature const &) = delete;
    VinesSingleFaceFeature() = delete;
#endif


public:
    /*0*/ virtual ~VinesSingleFaceFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VINESSINGLEFACEFEATURE
#endif



};