// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CodeBuilderPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDERPACKET
public:
    class CodeBuilderPacket& operator=(class CodeBuilderPacket const &) = delete;
    CodeBuilderPacket(class CodeBuilderPacket const &) = delete;
    CodeBuilderPacket() = delete;
#endif

public:
    /*0*/ virtual ~CodeBuilderPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /*
    inline  ~CodeBuilderPacket(){
         (CodeBuilderPacket::*rv)();
        *((void**)&rv) = dlsym("??1CodeBuilderPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};