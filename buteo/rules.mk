# This file intentionally left blank

### Some potentially needed stuff taken from
### https://github.com/GEIGEIGEIST/qmk-config-totem/blob/main/totem/rules.mk
# Ignore some warnings during the build, likely to be fixed before RP2040 PR is merged
# ALLOW_WARNINGS = yes

# AUDIO_ENABLE = no
# MUSIC_ENABLE = no
# LTO_ENABLE = no
# SPACE_CADET_ENABLE = no
# GRAVE_ESC_ENABLE = no 
# MAGIC_ENABLE = no
# NKRO_ENABLE = no   
# BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
# MOUSEKEY_ENABLE = yes       # Mouse keys
# EXTRAKEY_ENABLE = yes       # Audio control and System control
# COMMAND_ENABLE = no         # Commands for debug and configuration
# ENCODER_ENABLE = yes
# BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
# RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
# RGB_MATRIX_SUPPORTED = no
# RGB_MATRIX_ENABLE = no 

# POINTING_DEVICE_ENABLE = yes
# POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c

# PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS.


# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
ENCODER_ENABLE = yes
# COMBO_ENABLE = yes			# Combos
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
# AUDIO_ENABLE = yes          # Audio output

RGB_MATRIX_ENABLE = no     # Enable WS2812 RGB matrix
NKRO_ENABLE = no            # Enable N-Key Rollover
# RGB_MATRIX_DRIVER = WS2812
# SPLIT_KEYBOARD = no
# SERIAL_DRIVER = vendor

RGBLIGHT_SUPPORTED = no
# RGB_MATRIX_SUPPORTED = yes
# RGB_MATRIX_DRIVER = WS2812
# WS2812_DRIVER = vendor

ALLOW_WARNINGS = yes
PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS.

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c
