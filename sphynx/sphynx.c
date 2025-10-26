#include "sphynx.h"

bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) {
        return false; /* Don't process further events if user function exists and returns false */
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
