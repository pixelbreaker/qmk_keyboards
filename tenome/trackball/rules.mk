# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
ENCODER_ENABLE = yes
# COMBO_ENABLE = yes			# Combos
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
# AUDIO_ENABLE = yes          # Audio output

RGB_MATRIX_ENABLE = yes     # Enable WS2812 RGB matrix
NKRO_ENABLE = no            # Enable N-Key Rollover
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = vendor

RGBLIGHT_SUPPORTED = no
RGB_MATRIX_SUPPORTED = yes
RGB_MATRIX_DRIVER = ws2812
WS2812_DRIVER = vendor

ALLOW_WARNINGS = yes
PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS.

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360
