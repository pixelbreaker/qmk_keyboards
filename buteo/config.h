// Copyright 2023 Gabriel Mak (@pixelbreaker)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

// Fiddly setup for having I2C on GP0/1
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN GP0
#define I2C1_SCL_PIN GP1

// #define DIODE_DIRECTION COL2ROW

// #define MATRIX_ROWS 6
// #define MATRIX_COLS 6

// Limits the frequency that the sensor is polled for motion.
#define POINTING_DEVICE_TASK_THROTTLE_MS 10

// Enables support for extended i16 mouse reports (instead of i8).
#define MOUSE_EXTENDED_REPORT

// Configure for the Cirque Trackpad
#define CIRQUE_PINNACLE_DIAMETER_MM 40
#define CIRQUE_PINNACLE_CURVED_OVERLAY
#define CIRQUE_PINNACLE_ATTENUATION EXTREG__TRACK_ADCCONFIG__ADC_ATTENUATE_2X

#define ENCODERS_PAD_A                                                         \
  { GP4 }
#define ENCODERS_PAD_B                                                         \
  { GP5 }

#define ENCODER_RESOLUTION 4
#define ENCODER_DEFAULT_POS 0x3
