// Copyright 2023 adpenrose
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include_next <mcuconf.h>

// #define HAL_USE_SERIAL FALSE
#define HAL_USE_I2C TRUE

#undef RP_I2C_USE_I2C0
#undef RP_I2C_USE_I2C1
#define RP_I2C_USE_I2C0 TRUE
#define RP_I2C_USE_I2C1 FALSE
// #undef I2C0_SDA_PIN
// #define I2C0_SDA_PIN GP0
// #undef I2C0_SCL_PIN
// #define I2C0_SCL_PIN GP1
