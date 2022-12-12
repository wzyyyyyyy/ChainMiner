/**
 * @file  PackSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackSettings.
 *
 */
class PackSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSETTINGS
public:
    class PackSettings& operator=(class PackSettings const &) = delete;
    PackSettings(class PackSettings const &) = delete;
    PackSettings() = delete;
#endif

public:
    /**
     * @hash   -2029178690
     * @symbol ?getAllSettings@PackSettings@@QEBAAEBVValue@Json@@XZ
     */
    MCAPI class Json::Value const & getAllSettings() const;
    /**
     * @hash   1637070539
     * @symbol ?loadPackSettings@PackSettings@@QEAAXAEBUPackIdVersion@@AEBVValue@Json@@@Z
     */
    MCAPI void loadPackSettings(struct PackIdVersion const &, class Json::Value const &);

//private:
    /**
     * @hash   -1992609524
     * @symbol ?_initPackSetting@PackSettings@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
     */
    MCAPI void _initPackSetting(std::string const &, class Json::Value const &);

private:

};