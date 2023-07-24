#pragma once

#include_next <mcuconf.h>

#define HAL_USE_I2C TRUE

#undef RP_SPI_USE_SPI0
#define RP_SPI_USE_SPI0 TRUE
