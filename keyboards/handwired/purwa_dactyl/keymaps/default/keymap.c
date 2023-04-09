#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
      KC_LEFT,     KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,          KC_PSCR,     KC_6,  KC_7,   KC_8,     KC_9,    KC_0,       KC_EQUAL,    \
      KC_UP,     KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC,      KC_RBRC, KC_Y,  KC_U,   KC_I,     KC_O,    KC_P,      KC_MINUS,    \
      KC_DOWN,   KC_A, KC_S, KC_D, KC_F, KC_G, KC_PIPE,         KC_BSLS,   KC_H,  KC_J,   KC_K,     KC_L,    KC_SCLN, KC_QUOTE,    \
      KC_RIGHT,  KC_Z, KC_X, KC_C, KC_V, KC_B, KC_ESC,          KC_BSPC,     KC_N,  KC_M,   KC_COMMA, KC_DOT,  KC_SLASH,  KC_DEL ,      \
      KC_7,  KC_8,  KC_9,  KC_0,                                           KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT ,                  \
      KC_Y, KC_U, KC_I, KC_O, KC_P,                                       KC_Q,KC_W, KC_E, KC_R, KC_T \
                  
  )
};
