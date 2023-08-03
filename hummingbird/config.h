// Copyright 2023 kilipan (@kilipan)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
// #include "config_common.h"

//* also configured in info.json
#define MATRIX_ROW_PINS                                                        \
  { GP26, GP27, GP28, GP29, GP6, GP7 }
#define MATRIX_COL_PINS                                                        \
  { GP0, GP1, GP2, GP4, GP3 }

#define DIODE_DIRECTION ROW2COL

#define MATRIX_ROWS 6
#define MATRIX_COLS 5

#define WS2812_DI_PIN GP12

#ifdef RGBLIGHT_ENABLE
#define RGBLED_NUM 1
#define RGBLIGHT_DEFAULT_HUE 128
#define RGBLIGHT_DEFAULT_SAT 0
#define RGBLIGHT_DEFAULT_VAL 20
#define RGBLIGHT_LIMIT_VAL 20
#define RGBLIGHT_DEFAULT_SPD 20
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#define RGBLIGHT_SLEEP

// #define RGBLIGHT_EFFECT_ALTERNATING
// #define RGBLIGHT_EFFECT_BREATHING
// #define RGBLIGHT_EFFECT_CHRISTMAS
// #define RGBLIGHT_EFFECT_KNIGHT
// #define RGBLIGHT_EFFECT_RAINBOW_MOOD
// #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#endif
