#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC   , KC_Q   , KC_W   , KC_E   , KC_R        , KC_T  ,                   KC_Y     , KC_U        , KC_I    , KC_O           , KC_P            , KC_MINUS,
        KC_LALT  , KC_A   , KC_S   , KC_D   , KC_F        , KC_G  ,                   KC_H     , KC_J        , KC_K    , KC_L           , KC_SCLN         , KC_QUOTE,
        KC_LSFT  , KC_Z   , KC_X   , KC_C   , KC_V        , KC_B  ,                   KC_N     , KC_M    , KC_COMM     , KC_DOT         , KC_SLSH         , KC_BSLS ,
        LT(3, KC_DEL)   , KC_LGUI,                                                           KC_LGUI         , LT(3, KC_DEL),
        CTL_T(KC_UP), ALT_T(KC_DOWN), LT(1, KC_SCLN),  LSFT_T(KC_TAB), KC_SPC,         LSFT_T(KC_ENT), MEH_T(KC_BSPC),  LT(2, KC_GRV), ALT_T(KC_LEFT), CTL_T(KC_RIGHT)
    ),
    [1] = LAYOUT(
        KC_TAB   , KC_1   , KC_2   , KC_3   , KC_4        , KC_5  ,                   KC_6     , KC_7        , KC_8    , KC_9           , KC_0           , KC_MINUS,
        KC_LALT  , KC_F1  , KC_F2  , KC_F3  , KC_F4       , KC_F5 ,                   KC_H     , KC_J        , KC_K    , KC_L           , KC_SCLN         , KC_QUOTE,
        KC_LSFT  , KC_Z   , KC_X   , KC_C   , KC_V        , KC_B  ,                   KC_N     , KC_M    , KC_COMM     , KC_DOT         , KC_SLSH         , KC_BSLS ,
        KC_TRNS   , KC_TRNS,                                                          KC_LGUI         , LT(3, KC_DEL),
        KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS,                                    KC_TRNS, KC_TRNS,   KC_NO, KC_TRNS, KC_TRNS
    ),
    [2] = LAYOUT(
        KC_TAB   , KC_1   , KC_2   , KC_3   , KC_4        , KC_5  ,                   KC_6     , KC_7        , KC_8    , KC_9           , KC_0           , KC_MINUS,
        KC_LALT  , KC_F1  , KC_F2  , KC_F3  , KC_F4       , KC_F5 ,                   KC_H     , KC_J        , KC_K    , KC_L           , KC_SCLN         , KC_QUOTE,
        KC_LSFT  , KC_Z   , KC_X   , KC_C   , KC_V        , KC_B  ,                   KC_N     , KC_M    , KC_COMM     , KC_DOT         , KC_SLSH         , KC_BSLS ,
        KC_TRNS   , KC_TRNS,                                                           KC_LGUI         , LT(3, KC_DEL),
        KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS,                                    KC_TRNS, KC_TRNS,   KC_NO, KC_TRNS, KC_TRNS
    ),
    [3] = LAYOUT(
        KC_TAB   , KC_1   , KC_2   , KC_3   , KC_4        , KC_5  ,                   KC_6     , KC_7        , KC_8    , KC_9           , KC_0           , KC_MINUS,
        KC_LALT  , KC_F1  , KC_F2  , KC_F3  , KC_F4       , KC_F5 ,                   KC_H     , KC_J        , KC_K    , KC_L           , KC_SCLN         , KC_QUOTE,
        KC_LSFT  , KC_Z   , KC_X   , KC_C   , KC_V        , KC_B  ,                   KC_N     , KC_M    , KC_COMM     , KC_DOT         , KC_SLSH         , KC_BSLS ,
        KC_TRNS  , QK_BOOT,                                                           KC_LGUI         , LT(3, KC_DEL),
        KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS,                                    KC_TRNS, KC_TRNS,   KC_NO, KC_TRNS, KC_TRNS
    )
};