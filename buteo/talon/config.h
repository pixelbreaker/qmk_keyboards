// Copyright 2023 Gabriel Mak (@pixelbreaker)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#undef MOUSE_EXTENDED_REPORT

// Limits the frequency that the sensor is polled for motion.
#undef POINTING_DEVICE_TASK_THROTTLE_MS
// #define POINTING_DEVICE_TASK_THROTTLE_MS 5
#define POINTING_DEVICE_MOTION_PIN GP28

#define AZOTEQ_IQS5XX_TPS65
#define AZOTEQ_IQS5XX_ROTATION_180

#undef CIRQUE_PINNACLE_DIAMETER_MM
#undef CIRQUE_PINNACLE_CURVED_OVERLAY
#undef CIRQUE_PINNACLE_ATTENUATION
