// Copyright 2022 Matthew Dews (@matthew-dews)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
    R00, R01, R02, R03, R04, R05, R06, \
    R10, R11, R12, R13, R14, R15, R16, \
    R20, R21, R22, R23, R24, R25, R26, \
    R31, R32, R33, R34, R35, R36, \
    R43, R44, R45, R46, \
    R51, R52, R53, R54, R55, R56 \
) { \
    { R00, R01, R02, R03, R04, R05, R06 }, \
    { R10, R11, R12, R13, R14, R15, R16 }, \
    { R20, R21, R22, R23, R24, R25, R26 }, \
    { XXX, R31, R32, R33, R34, R35, R36 }, \
    { XXX, XXX, XXX, R43, R44, R45, R46 }, \
    { XXX, R51, R52, R53, R54, R55, R56 } \
}
