// Copyright 2022 Matthew Dews (@matthew-dews)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
    L00, L01, L02, L03, L04, L05,                        R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15,                        R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25,                        R20, R21, R22, R23, R24, R25, \
                        L34, L35,                        R30, R31, \
         L41, L42, L43, L44, L45,                        R40, R41, R42, R43, R44 \
) { \
    { L00, L01, L02, L03, L04, L05 }, \
    { L10, L11, L12, L13, L14, L15 }, \
    { L20, L21, L22, L23, L24, L25 }, \
    { XXX, XXX, XXX, XXX, L34, L35 }, \
    { XXX, L41, L42, L43, L44, L45 }, \
\
    { R00, R01, R02, R03, R04, R05 },\
    { R10, R11, R12, R13, R14, R15 }, \
    { R20, R21, R22, R23, R24, R25 }, \
    { R30, R31, XXX, XXX, XXX, XXX }, \
    { R40, R41, R42, R43, R44, XXX }\
}
