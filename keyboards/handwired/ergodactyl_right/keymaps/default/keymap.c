#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_PSCR  , KC_6  , KC_7   , KC_8   , KC_9  , KC_0  , KC_EQL  ,
        KC_RBRC  , KC_Y  , KC_U   , KC_I   , KC_O  , KC_P  , KC_MINUS,
        KC_BSLS  , KC_H  , KC_J   , KC_K   , KC_L  ,KC_SCLN, KC_QUOTE,
                   KC_N  , KC_M   , KC_COMM, KC_DOT,KC_SLSH, KC_LCTL ,
                                    KC_RCTL,KC_RALT,KC_RGUI, KC_BSPC ,
                KC_ENT, KC_LEFT, KC_UP  , KC_DOWN, KC_RIGHT, KC_BSPC                
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif 
  return true;
}

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
