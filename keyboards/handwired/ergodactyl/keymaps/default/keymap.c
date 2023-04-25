#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC   , KC_1   , KC_2   , KC_3   , KC_4  , KC_5  , KC_F12  ,                   KC_PSCR  , KC_6     , KC_7     , KC_8    , KC_9           , KC_0            , KC_EQL  ,
        KC_TAB   , KC_Q   , KC_W   , KC_E   , KC_R  , KC_T  , KC_LBRC ,                   KC_RBRC  , KC_Y     , KC_U     , KC_I    , KC_O           , KC_P            , KC_MINUS,
        KC_LALT  , KC_A   , KC_S   , KC_D   , KC_F  , KC_G  , KC_PIPE ,                   KC_BSLS  , KC_H     , KC_J     , KC_K    , KC_L           , KC_SCLN         , KC_QUOTE,
        KC_LCTL  , KC_Z   , KC_X   , KC_C   , KC_V  , KC_B  ,                                        KC_N     , KC_M     , KC_COMM , KC_DOT         , KC_SLSH         , KC_BSLS ,
        MO(1)    , KC_HOME, KC_TRNS, KC_WH_D,                                                                              KC_WH_U , KC_WH_R        , KC_END          , LT(2, KC_DEL),
        C_S_T(KC_DEL),ALT_T(KC_DOWN),KC_LSFT, KC_SPC,  CTL_T(KC_UP), KC_LGUI,            KC_GRV, CTL_T(KC_LEFT)  ,  LSFT_T(KC_ENT),  MEH_T(KC_ESC), ALT_T(KC_RIGHT) ,LCA_T(KC_BSPC)
    ),
    [1] = LAYOUT(
        KC_TRNS   , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F12  ,                   KC_F11   , KC_F6    , KC_F7    , KC_F8   , KC_F9          , KC_F10          , KC_TRNS ,
        KC_TAB   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,                   KC_TRNS  , KC_TRNS   , KC_TRNS  , KC_TRNS , KC_TRNS        , KC_TRNS         , KC_TRNS ,
        KC_LALT  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,                   KC_TRNS  , KC_LEFT   , KC_DOWN  , KC_UP   , KC_RIGHT       , KC_TRNS         , KC_TRNS ,
        KC_LCTL  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                        KC_TRNS   , KC_TRNS  , KC_TRNS , KC_TRNS        , KC_TRNS         , KC_TRNS ,
        KC_TRNS , KC_HOME, KC_TRNS, KC_TRNS,                                                                              KC_PGDN , KC_PGUP        , KC_END          , KC_TRNS ,
        C_S_T(KC_DEL),ALT_T(KC_DOWN),KC_LSFT, KC_SPC,  CTL_T(KC_UP), KC_LGUI,            KC_GRV, CTL_T(KC_LEFT)  ,  LSFT_T(KC_ENT),  MEH_T(KC_ESC), ALT_T(KC_RIGHT) ,LCA_T(KC_BSPC)

    ),
    [2] = LAYOUT(
        KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,                   KC_TRNS , KC_TRNS  , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS         , KC_TRNS ,
        KC_TAB   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,                   KC_TRNS , KC_TRNS  , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS         , KC_TRNS ,
        KC_LALT  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT ,                   EE_CLR  , KC_LEFT  , KC_DOWN  , KC_UP , KC_RIGHT  , KC_TRNS         , KC_TRNS ,
        KC_LCTL  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                        KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS         , KC_TRNS ,
        KC_TRNS , AS_DOWN, KC_TRNS, AS_UP,                                                                              AS_ON , AS_OFF        , CW_TOGG          , KC_TRNS ,
        C_S_T(KC_DEL),ALT_T(KC_DOWN),KC_LSFT, KC_SPC,  CTL_T(KC_UP), KC_LGUI,            KC_GRV, CTL_T(KC_LEFT)  ,  LSFT_T(KC_ENT),  MEH_T(KC_ESC), ALT_T(KC_RIGHT) ,LCA_T(KC_BSPC)

    )
};