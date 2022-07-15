﻿// pch.h: 这是预编译标头文件。
// 下方列出的文件仅编译一次，提高了将来生成的生成性能。
// 这还将影响 IntelliSense 性能，包括代码完成和许多代码浏览功能。
// 但是，如果此处列出的文件中的任何一个在生成之间有更新，它们全部都将被重新编译。
// 请勿在此处添加要频繁更新的文件，这将使得性能优势无效。

#ifndef PCH_H
#define PCH_H

// 添加要在此处预编译的标头
#include <iostream>
#include <filesystem>
#include <Global.h>
#include <EventAPI.h>
#include <LoggerAPI.h>
#include <I18nAPI.h>
#include "third-party/rapidjson/rapidjson.h"
#include "third-party/rapidjson/document.h"
#include "third-party/rapidjson/writer.h"
#include "third-party/rapidjson/prettywriter.h"
#include "third-party/nlohmann/json.hpp"

#endif //PCH_H