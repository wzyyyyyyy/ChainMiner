/**
 * @file  AllowListEntry.hpp
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
 * @brief MC class AllowListEntry.
 *
 */
class AllowListEntry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ALLOWLISTENTRY
public:
    class AllowListEntry& operator=(class AllowListEntry const &) = delete;
    AllowListEntry(class AllowListEntry const &) = delete;
    AllowListEntry() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AllowListEntry();
    /**
     * @hash   697789375
     * @vftbl  1
     * @symbol ?serialize@AllowListEntry@@UEAAXAEAVValue@Json@@@Z
     */
    virtual void serialize(class Json::Value &);
    /**
     * @hash   -191197744
     * @vftbl  2
     * @symbol ?deserialize@AllowListEntry@@UEAAXAEAVValue@Json@@@Z
     */
    virtual void deserialize(class Json::Value &);
    /**
     * @hash   885833856
     * @symbol ??0AllowListEntry@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI AllowListEntry(std::string);
    /**
     * @hash   -815751106
     * @symbol ??0AllowListEntry@@QEAA@AEAVValue@Json@@@Z
     */
    MCAPI AllowListEntry(class Json::Value &);

};