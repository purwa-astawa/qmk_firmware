/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

// home row mods

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD_PER_KEY

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0


/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5  }
#define MATRIX_ROW_PINS { F7, B1, B3, B2, B6 }

// WS2812 RGB LED strip input and number of LEDs
#define DIODE_DIRECTION COL2ROW
#define RGB_DI_PIN D3
#define RGBLED_NUM 10
#define RGBLED_SPLIT {5, 5}
#define RGBLIGHT ANIMATIONS

#define USE_SERIAL
#define SOFT_SERIAL_PIN D0
#define MASTER_LEFT
#define DEBOUNCE 5
#define SPLIT_USB_DETECT
