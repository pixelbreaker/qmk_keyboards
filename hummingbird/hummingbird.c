#include "hummingbird.h"

void keyboard_post_init_kb(void) {
#ifdef RGBLIGHT_ENABLE
  // enable RGB LED
  setPinOutput(GP11);
  writePinHigh(GP11);
#endif

  // disable user LED
  setPinOutput(GP17); // R
  setPinOutput(GP16); // G
  setPinOutput(GP25); // B
  writePinHigh(GP17);
  writePinHigh(GP16);
  writePinHigh(GP25);
}

bool led_update_kb(led_t led_state) {
  bool res = led_update_user(led_state);
  if (res) {
    writePin(GP16, !led_state.caps_lock);
  }
  return res;
}

void caps_word_set_user(bool active) { writePin(GP25, !active); }
