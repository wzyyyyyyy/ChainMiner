// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

namespace CerealHelpers {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    MCAPI void bindColor();
    MCAPI void bindHelpers();
    MCAPI void bindIdentifierString();
    MCAPI void bindIntRange();
    MCAPI void bindLocIdString();
    MCAPI void bindResourcePath();
    MCAPI void bindVec3();
    MCAPI class std::array<int, 3> blockPosAsArray(class BlockPos const &);
    MCAPI void blockPosFromArray(class BlockPos &, class std::array<int, 3> const &);
    MCAPI void colorFromFloatArray3(class mce::Color &, class std::array<float, 3> const &);
    MCAPI void colorFromFloatArray4(class mce::Color &, class std::array<float, 4> const &);
    MCAPI void colorFromHexString(class mce::Color &, std::string const &);
    MCAPI void colorFromIntArray3(class mce::Color &, class std::array<int, 3> const &);
    MCAPI void colorFromIntArray4(class mce::Color &, class std::array<int, 4> const &);
    MCAPI class std::array<float, 3> colorToFloatArray3(class mce::Color const &);
    MCAPI class std::array<float, 4> colorToFloatArray4(class mce::Color const &);
    MCAPI class std::array<int, 3> colorToIntArray3(class mce::Color const &);
    MCAPI class std::array<int, 4> colorToIntArray4(class mce::Color const &);
    MCAPI void hashedStringFromString(class HashedString &, std::string const &);
    MCAPI class std::array<float, 3> vec3AsArray(class Vec3 const &);
    MCAPI void vec3FromArray(class Vec3 &, class std::array<float, 3>);

};