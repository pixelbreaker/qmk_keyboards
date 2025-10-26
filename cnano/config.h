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

/* Handedness. */
#define MASTER_RIGHT

/* SPI & PMW3360 settings. */
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP22
#define SPI_MISO_PIN GP20
#define SPI_MOSI_PIN GP23
#define POINTING_DEVICE_CS_PIN GP16


/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define SPLIT_POINTING_ENABLE

// Pointing device is on the right split.
#define POINTING_DEVICE_RIGHT

// Limits the frequency that the sensor is polled for motion.
#define POINTING_DEVICE_TASK_THROTTLE_MS 1

// Invert X axis on mouse reports.
#define POINTING_DEVICE_INVERT_X

// Enables support for extended i16 mouse reports (instead of i8).
#define MOUSE_EXTENDED_REPORT

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 4
#define BOOTMAGIC_LITE_ROW_RIGHT 4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 4
