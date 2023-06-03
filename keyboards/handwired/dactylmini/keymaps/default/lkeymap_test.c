#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC   , KC_1   , KC_2   , KC_3   , KC_4  , KC_5  , KC_F12  ,                   KC_PSCR  , KC_6     , KC_7     , KC_8    , KC_9           , KC_0            , KC_EQL  ,
        KC_TAB   , KC_Q   , KC_W   , KC_E   , KC_R  , KC_T  , KC_LBRC ,                   KC_RBRC  , KC_Y     , KC_U     , KC_I    , KC_O           , KC_P            , KC_MINUS,
        KC_LALT  , KC_A   , KC_S   , KC_D   , KC_F  , KC_G  , KC_PIPE ,                   KC_BSLS  , KC_H     , KC_J     , KC_K    , KC_L           , KC_SCLN         , KC_QUOTE,
        KC_LCTL  , KC_Z   , KC_X   , KC_C   , KC_V  , KC_B  ,                                        KC_N     , KC_M     , KC_COMM , KC_DOT         , KC_SLSH         , KC_BSLS ,
        MO(1)    , KC_9, KC_NO, KC_6,                                                                              KC_7 , KC_8         , KC_0          , KC_DEL ,
        KC_Q, KC_W ,KC_E, KC_R, KC_T, KC_LBRC ,                       KC_Y   , KC_U ,  KC_I,  KC_O, KC_P,KC_MINUS
    ),
    [1] = LAYOUT(
        KC_TRNS   , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F12  ,                   KC_F11   , KC_F6    , KC_F7    , KC_F8   , KC_F9          , KC_F10          , KC_TRNS ,
        KC_TAB   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,                   KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS , KC_TRNS        , KC_TRNS         , KC_TRNS ,
        KC_LALT  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT ,                   EE_CLR  , KC_LEFT  , KC_UP    , KC_DOWN , KC_RIGHT       , KC_TRNS         , KC_TRNS ,
        KC_LCTL  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                        KC_TRNS  , KC_TRNS  , KC_TRNS , KC_TRNS        , KC_TRNS         , KC_TRNS ,
        KC_TRNS , KC_TRNS, KC_WH_L, KC_WH_D,                                                                              KC_WH_U , KC_WH_R        , KC_END          , KC_DEL ,
       C_S_T(KC_DEL),ALT_T(KC_DOWN),KC_LSFT, LSFT_T(KC_SPC),  CTL_T(KC_LEFT), KC_LGUI,                       KC_GRV   , CTL_T(KC_RIGHT)  ,  LSFT_T(KC_ENT),  MEH_T(KC_ESC), ALT_T(KC_UP) ,LCA_T(KC_BSPC)
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
