/*
Copyright 2021 @dlford

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
#include "tenome.h"
// #include <lib/lib8tion/lib8tion.h>
// #include <math.h>

// clang-format off
#ifdef RGB_MATRIX_ENABLE
/**
 * \brief LEDs index.
 *
 * ╭────────────────────╮                 ╭────────────────────╮
 *    2   3   8   9  12                     30  27  26  21  20
 * ├────────────────────┤                 ├────────────────────┤
 *    1   4   7  10  13                     31  28  25  22  19
 * ├────────────────────┤                 ├────────────────────┤
 *    0   5   6  11  14                     32  29  24  23  18
 * ╰────────────────────╯                 ╰────────────────────╯
 *                   15  16      33  34
 *                 ╰─────────╯ ╰─────────╯
 *
 * Note: the LED config simulates 36 LEDs instead of the actual 35 to prevent
 * confusion when testing LEDs during assembly when handedness is not set
 * correctly.  Those fake LEDs are bound to the physical top-left corner.
 */
#ifdef TENOME_ENCODER_LEDS
led_config_t g_led_config = { {
    /* Key Matrix to LED index. */
    // Left split.
    {      24,  25,  26,  27,  28 }, // Top row
    {      23,  22,  21,   20,   19 }, // Middle row
    {      14,   15,   16,   17,   18 }, // Bottom row
    {     NO_LED, NO_LED,NO_LED,  13, 12 }, // Thumb cluster
    // Right split.
    {     45,   44,  43,  42,  41 }, // Top row
    {     36,   37,  38,  39,  40 }, // Middle row
    {     35,   34,  33,  32,  31 }, // Bottom row
    {     30, 29, NO_LED,NO_LED,NO_LED }, // Thumb cluster
}, {
    /* LED index to physical position. */
    // Left split.
    /* Encoder */  { 90, 60 }, { 90, 60 }, { 90, 60 }, { 90, 60 }, { 90, 60 }, { 90, 60 },
    /* Encoder */  { 90, 60 }, { 90, 60 }, { 90, 60 }, { 90, 60 }, { 90, 60 }, { 90, 60 },
    /* row L 4  */                                     { 90, 60 }, { 70, 60 },
    /* row L 3  */ { 0,  40 }, { 20, 40 }, { 40, 40 }, { 60, 40 }, { 80, 40 },
    /* row L 2  */ { 80, 20 }, { 60, 20 }, { 40, 20 }, { 20, 20 }, { 0, 20 },
    /* row L 1  */ { 0,  0 },  { 20, 0 },  { 40, 0 },  { 60, 0 },  { 80, 0 },
    /* row R 4 */  { 90, 60 }, { 110, 60 },
    /* row R 3  */ { 180,  40 }, { 160, 40 }, { 140, 40 }, { 120, 40 }, { 100, 40 },
    /* row R 2  */ { 100,  20 }, { 120, 20 }, { 140, 20 }, { 160, 20 }, { 180, 20 },
    /* row R 1  */ { 180,  0 },  { 160, 0 },  { 140, 0 },  { 120, 0 },  { 100, 0 },
}, {
    /* LED index to flag. */
    // Left split.
    /* Encoder  */ LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,
    /* Encoder  */ LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,
    /* row L 4  */ LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
    /* row L 2  */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* row L 3  */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* row L 1  */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* row R 4  */ LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
    /* row R 3  */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* row R 2  */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* row R 1  */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
} };
#else
led_config_t g_led_config = { {
    /* Key Matrix to LED index. */
    // Left split.
    {      12,  13,  14,  15,  16 }, // Top row
    {      11,  10,  9,   8,   7 }, // Middle row
    {      2,   3,   4,   5,   6 }, // Bottom row
    {     NO_LED, NO_LED,NO_LED,  1, 0 }, // Thumb cluster
    // Right split.
    {     33,   32,  31,  30,  29 }, // Top row
    {     24,   25,  26,  27,  28 }, // Middle row
    {     23,   22,  21,  20,  19 }, // Bottom row
    {     17, 18, NO_LED,NO_LED,NO_LED }, // Thumb cluster
}, {
    /* LED index to physical position. */
    // Left split.
    /* row L 4  */                                     { 90, 60 }, { 70, 60 },
    /* row L 3  */ { 0,  40 }, { 20, 40 }, { 40, 40 }, { 60, 40 }, { 80, 40 },
    /* row L 2  */ { 80, 20 }, { 60, 20 }, { 40, 20 }, { 20, 20 }, { 0, 20 },
    /* row L 1  */ { 0,  0 },  { 20, 0 },  { 40, 0 },  { 60, 0 },  { 80, 0 },
    /* row R 4 */  { 90, 60 }, { 110, 60 },
    /* row R 3  */ { 180,  40 }, { 160, 40 }, { 140, 40 }, { 120, 40 }, { 100, 40 },
    /* row R 2  */ { 100,  20 }, { 120, 20 }, { 140, 20 }, { 160, 20 }, { 180, 20 },
    /* row R 1  */ { 180,  0 },  { 160, 0 },  { 140, 0 },  { 120, 0 },  { 100, 0 },
}, {
    /* LED index to flag. */
    // Left split.
    /* row L 4  */ LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
    /* row L 2  */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* row L 3  */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* row L 1  */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* row R 4  */ LED_FLAG_MODIFIER, LED_FLAG_MODIFIER,
    /* row R 3  */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* row R 2  */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    /* row R 1  */ LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
} };
#endif
#endif
// clang-format on

bool encoder_update_kb(uint8_t index, bool clockwise) {
  if (!encoder_update_user(index, clockwise)) {
    return false; /* Don't process further events if user function exists and
                     returns false */
  }
  if (index == 0) { /* First encoder */
    if (clockwise) {
      tap_code_delay(KC_VOLU, 10);
    } else {
      tap_code_delay(KC_VOLD, 10);
    }
  }
  return true;
}
