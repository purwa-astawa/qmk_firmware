// Copyright 2022 Purwa Astawa (@Purwa Astawa)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define USE_I2C
#define MASTER_LEFT

#define MATRIX_ROWS 6*2
#define MATRIX_COLS 7
#define MATRIX_ROW_PINS { F5, F6, F7, B1, B3, B2 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5, B6 }
