// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PropertiesSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTIESSETTINGS
public:
    class PropertiesSettings& operator=(class PropertiesSettings const &) = delete;
    PropertiesSettings(class PropertiesSettings const &) = delete;
    PropertiesSettings() = delete;
#endif

public:
    MCAPI PropertiesSettings(std::string const &);
    MCAPI bool allowCheats() const;
    MCAPI bool canEmitTelemetryEvents() const;
    MCAPI bool enableItemStackNetManager() const;
    MCAPI bool forceGamemode() const;
    MCAPI unsigned short getCompressionThresholdBytesize() const;
    MCAPI enum PlayerPermissionLevel const getDefaultPlayerPermissionLevel() const;
    MCAPI enum Difficulty getDifficulty() const;
    MCAPI std::vector<std::string> const & getExtraTrustedKeys() const;
    MCAPI enum GameType getGameMode() const;
    MCAPI std::string const & getLanguage() const;
    MCAPI std::string const & getLevelName() const;
    MCAPI std::string const & getLevelSeed() const;
    MCAPI std::string const & getLevelType() const;
    MCAPI class std::chrono::duration<int, struct std::ratio<60, 1>> getMaxPlayerIdleTime() const;
    MCAPI int getMaxPlayers() const;
    MCAPI unsigned int getMaxThreads() const;
    MCAPI int getMaxViewDistanceChunks() const;
    MCAPI std::string const & getMotd() const;
    MCAPI enum CommandPermissionLevel getOpPermissionLevel() const;
    MCAPI struct PlayerMovementSettings const & getPlayerMovementSettings() const;
    MCAPI struct NetworkAddress getRemoteServerCommunicationEndpoint() const;
    MCAPI struct ScriptSettings const & getScriptSettings() const;
    MCAPI unsigned short getServerPort() const;
    MCAPI unsigned short getServerPortv6() const;
    MCAPI int getServerTickRange() const;
    MCAPI std::string const & getServerType() const;
    MCAPI int getServerWakeupFrequency() const;
    MCAPI enum TransportLayer getTransportLayerType() const;
    MCAPI bool isContentLogFileEnabled() const;
    MCAPI bool isItemTransactionManagerLoggingEnabled() const;
    MCAPI bool const isPropertiesFileLoaded() const;
    MCAPI bool texturePackRequired() const;
    MCAPI bool useAllowList() const;
    MCAPI bool useMsaGamertagsOnly() const;
    MCAPI bool useOnlineAuthentication() const;
    MCAPI bool useWebsocketEncryption() const;
    MCAPI float websocketRetryTime() const;
    MCAPI ~PropertiesSettings();
    MCAPI static bool parseBoolValue(std::string const &);
    MCAPI static enum GameType parseGameMode(std::string const &);

protected:

private:

};