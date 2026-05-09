#pragma once

/* -========================================================
    Includes
   ========================================================- */

#include "Utils.h"
#include <Geode/utils/async.hpp>

/* -========================================================
    Types
   ========================================================- */

using PickTaskRet = geode::Result<std::filesystem::path>;
using PickManyTaskRet = geode::Result<std::vector<std::filesystem::path>>;
using PickFuture = arc::Future<PickTaskRet>;
using PickManyFuture = arc::Future<PickManyTaskRet>;
// what the fuck are these original ai-generated-looking comments

/* -========================================================
    Hooks
   ========================================================- */

PickTask pickHook(file::PickMode mode, const file::FilePickOptions & options);
PickManyTask pickManyHook(const file::FilePickOptions & options);
