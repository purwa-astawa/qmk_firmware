// Copyright 2022 Purwa Astawa (@Purwa Astawa)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#undef DRIVER_1_LED_TOTAL
#undef DRIVER_LED_TOTAL
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
//
#define RGB_DI_PIN D3
#define RGB_MATRIX_LED_COUNT 1


#define DRIVER_1_LED_TOTAL 1
#define DRIVER_LED_TOTAL DRIVER_1_LED_TOTAL
#define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#define RGB_MATRIX_HUE_STEP 8
#define RGB_MATRIX_SAT_STEP 8
#define RGB_MATRIX_VAL_STEP 8
#define RGB_MATRIX_SPD_STEP 10

