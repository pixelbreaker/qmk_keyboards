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

// wiring of each half
#define MATRIX_COL_PINS \
    { GP6, GP7, GP8, GP9, GP12 }
#define MATRIX_ROW_PINS \
    { GP2, GP3, GP4, GP5 }

#define DIODE_DIRECTION COL2ROW
#define USB_POLLING_INTERVAL_MS 1

/* Handedness. */
// #define MASTER_RIGHT
#define SERIAL_USART_FULL_DUPLEX // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP0  // USART TX pin
#define SERIAL_USART_RX_PIN GP1  // USART RX pin
#define SERIAL_USART_PIN_SWAP

// #define SERIAL_USART_TX_PIN GP0
#define SPLIT_HAND_PIN GP27
// #define SPLIT_HAND_PIN_LOW_IS_LEFT

/* RP2040 stuff*/
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

/* mouse config */
// #define MOUSEKEY_INTERVAL 20
// #define MOUSEKEY_DELAY 0
// #define MOUSEKEY_TIME_TO_MAX 60
// #define MOUSEKEY_MAX_SPEED 7
// #define MOUSEKEY_WHEEL_DELAY 0

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 4
#define BOOTMAGIC_LITE_ROW_RIGHT 4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 4

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
// /* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

// /* Enables This makes it easier for fast typists to use dual-function keys */
// #define PERMISSIVE_HOLD
