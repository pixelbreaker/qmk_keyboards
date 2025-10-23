# This file intentionally left blank

### Some potentially needed stuff taken from
### https://github.com/GEIGEIGEIST/qmk-config-totem/blob/main/totem/rules.mk
# Ignore some warnings during the build, likely to be fixed before RP2040 PR is merged
ALLOW_WARNINGS = yes

AUDIO_ENABLE = no
MUSIC_ENABLE = no
LTO_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no 
MAGIC_ENABLE = no
NKRO_ENABLE = no   
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
COMMAND_ENABLE = no         # Commands for debug and configuration
ENCODER_ENABLE = no
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
# RGBLIGHT_DRIVER = ws2812
# WS2812_DRIVER = vendor
RGB_MATRIX_SUPPORTED = no
RGB_MATRIX_ENABLE = no 

PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS.
