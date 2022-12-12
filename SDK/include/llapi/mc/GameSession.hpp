/**
 * @file  GameSession.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameSession.
 *
 */
class GameSession {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMESESSION
public:
    class GameSession& operator=(class GameSession const &) = delete;
    GameSession(class GameSession const &) = delete;
    GameSession() = delete;
#endif

public:
    /**
     * @hash   -1882858650
     * @symbol ??0GameSession@@QEAA@AEAVNetworkHandler@@V?$unique_ptr@VServerNetworkHandler@@U?$default_delete@VServerNetworkHandler@@@std@@@std@@AEAVLoopbackPacketSender@@V?$unique_ptr@VNetEventCallback@@U?$default_delete@VNetEventCallback@@@std@@@3@U?$pair@V?$unique_ptr@VLevel@@U?$default_delete@VLevel@@@std@@@std@@V?$OwnerPtrT@UEntityRefTraits@@@@@3@W4SubClientId@@@Z
     */
    MCAPI GameSession(class NetworkHandler &, std::unique_ptr<class ServerNetworkHandler>, class LoopbackPacketSender &, std::unique_ptr<class NetEventCallback>, struct std::pair<std::unique_ptr<class Level>, class OwnerPtrT<struct EntityRefTraits>>, enum SubClientId);
    /**
     * @hash   -1557714849
     * @symbol ?getServerNetworkHandler@GameSession@@QEAA?AV?$NonOwnerPointer@VServerNetworkHandler@@@Bedrock@@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class ServerNetworkHandler> getServerNetworkHandler();
    /**
     * @hash   1630272294
     * @symbol ?isLeaveGameDone@GameSession@@QEAA_NXZ
     */
    MCAPI bool isLeaveGameDone();
    /**
     * @hash   1436051572
     * @symbol ?setLevel@GameSession@@QEAAXU?$pair@V?$unique_ptr@VLevel@@U?$default_delete@VLevel@@@std@@@std@@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@Z
     */
    MCAPI void setLevel(struct std::pair<std::unique_ptr<class Level>, class OwnerPtrT<struct EntityRefTraits>>);
    /**
     * @hash   -636836911
     * @symbol ?startLeaveGame@GameSession@@QEAAXXZ
     */
    MCAPI void startLeaveGame();
    /**
     * @hash   -844574595
     * @symbol ?tick@GameSession@@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @hash   740079872
     * @symbol ??1GameSession@@QEAA@XZ
     */
    MCAPI ~GameSession();

};