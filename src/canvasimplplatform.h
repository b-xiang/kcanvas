/*
        KCANVAS PROJECT

    Common 2D graphics API abstraction with multiple back-end support

    (c) livingcreative, 2015

    https://github.com/livingcreative/kcanvas

    canvasimplplatform.h
        all platform specific includes and defines for implementations are hosted here
*/

#pragma once

#ifdef _CAIRO
#include "canvasimplcairo.h"
#else

#ifdef _WIN32
#include "win/canvasimplgdiplus.h"
#ifdef _MSC_VER
#include "win/canvasimpld2d.h"
#endif
#endif

#ifdef __APPLE__
#include "mac/canvasimplquartz.h"
#endif

#endif