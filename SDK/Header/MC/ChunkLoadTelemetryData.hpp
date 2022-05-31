// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct ChunkLoadTelemetryData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKLOADTELEMETRYDATA
public:
    struct ChunkLoadTelemetryData& operator=(struct ChunkLoadTelemetryData const &) = delete;
    ChunkLoadTelemetryData(struct ChunkLoadTelemetryData const &) = delete;
    ChunkLoadTelemetryData() = delete;
#endif

public:
    MCAPI void recordLoadedChunk(class LevelChunk const &);
    MCAPI class Json::Value toJson() const;

protected:

private:

};