#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC   , KC_1   , KC_2   , KC_3   , KC_4        , KC_5  , KC_F12  ,                   KC_PSCR  , KC_6     , KC_7        , KC_8    , KC_9           , KC_0            , KC_EQL  ,
        KC_TAB   , KC_Q   , KC_W   , KC_E   , KC_R        , KC_T  , KC_LBRC ,                   KC_RBRC  , KC_Y     , KC_U        , KC_I    , KC_O           , KC_P            , KC_MINUS,
        KC_LALT  , KC_A   , KC_S   , KC_D   , KC_F        , KC_G  , KC_PIPE ,                   KC_BSLS  , KC_H     , KC_J        , KC_K    , KC_L           , KC_SCLN         , KC_QUOTE,
        KC_LSFT  , KC_Z   , KC_X   , KC_C   , KC_V        , KC_B  ,                                        KC_N     , KC_M        , KC_COMM , KC_DOT         , KC_SLSH         , KC_BSLS ,
        LT(3, KC_DEL) , KC_LGUI, KC_WH_D, KC_WH_U,                                                                                       KC_PGDN , KC_PGUP        , KC_LGUI  ,  LT(3, KC_DEL)  ,
        C_S_T(KC_BSLS),CTL_T(KC_UP), ALT_T(KC_DOWN), LSFT_T(KC_TAB), KC_SPC, LT(1, KC_SCLN),   LT(2, KC_GRV), LSFT_T(KC_ENT), MEH_T(KC_ESC),   ALT_T(KC_LEFT), CTL_T(KC_RIGHT), LCA_T(KC_BSPC)
    ),
    [1] = LAYOUT(
        KC_ESC   , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_NO  , KC_F12  ,                   KC_F11   , KC_F6    , KC_F7    , KC_F8    , KC_F9   , KC_F10   , KC_BSPC ,
        KC_TAB   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_5   , KC_TRNS ,                   KC_TRNS  , KC_MS_L  , KC_MS_D  , KC_MS_U , KC_MS_R  , KC_TRNS  , KC_BTN1,
        KC_LALT  , KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,  KC_F5,  KC_HOME,                    KC_END  , KC_LEFT  , KC_DOWN  , KC_UP   , KC_RIGHT , KC_TRNS , KC_BTN2 ,
        KC_LSFT  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, CW_TOGG,                                        KC_INS  , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS ,
        KC_NO  , KC_TRNS, KC_TRNS, KC_TRNS,                                                                              KC_PGDN , KC_PGUP    , KC_END   , KC_NO ,
        KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,                                                   KC_NO, KC_TRNS  ,  KC_TRNS,  KC_NO, KC_TRNS ,KC_TRNS
    ),
    [2] = LAYOUT(
        KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,                   KC_TRNS , KC_TRNS  , KC_TRNS  , KC_TRNS , KC_TRNS  , KC_TRNS         , KC_TRNS ,
        KC_TAB   , KC_AT  , KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_TRNS ,                   KC_TRNS , KC_PIPE  , KC_COMM  , KC_DOT  , KC_QUES  , KC_ASTR         , KC_TRNS ,
        KC_LALT  , KC_EXLM, KC_LPRN, KC_RPRN, KC_LABK, KC_RABK, KC_TRNS ,                   KC_TRNS , KC_AMPR  , KC_EQL   , KC_MINUS, KC_QUOTE , KC_BSLS         , KC_SLSH ,
        KC_LSFT  , KC_NO  , KC_PERC, KC_DLR , KC_CIRC, KC_HASH,                                        KC_UNDS , KC_TRNS  , KC_TRNS , KC_TRNS  , KC_TRNS         , KC_TRNS ,
        KC_NO ,  KC_TRNS, KC_TRNS, KC_TRNS,                                                                               KC_TRNS , KC_TRNS , KC_TRNS         , KC_NO   ,
        KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,                                                           KC_NO, KC_TRNS  ,  KC_TRNS,  KC_NO, KC_TRNS ,KC_TRNS
    ),
    [3] = LAYOUT(
        KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS, TG(4), KC_TRNS, KC_TRNS ,                   KC_TRNS , KC_TRNS  , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS       , KC_TRNS ,
        KC_TAB   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,                   KC_TRNS , KC_TRNS  , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS         , KC_TRNS ,
        KC_LALT  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT ,                   EE_CLR  , KC_LEFT  , KC_DOWN  , KC_UP , KC_RIGHT  , KC_TRNS         , KC_TRNS ,
        KC_LCTL  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                        KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS         , KC_TRNS ,
        KC_NO ,  KC_TRNS, KC_TRNS, KC_TRNS,                                                                               KC_TRNS , KC_TRNS , KC_TRNS         , KC_NO   ,
        KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,                                                          KC_NO, KC_TRNS  ,  KC_TRNS,  KC_NO, KC_TRNS ,KC_TRNS
    ),
    [4] = LAYOUT(
        KC_PSLS  , KC_TRNS, KC_TRNS, KC_TRNS, TG(4), KC_TRNS, KC_TRNS ,                   KC_TRNS , KC_TRNS  , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS          , KC_TRNS ,
        KC_PAST   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,                   KC_TRNS , KC_TRNS  , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS         , KC_TRNS ,
        KC_SCLN  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT ,                   EE_CLR  , KC_LEFT  , KC_DOWN  , KC_UP , KC_RIGHT  , KC_TRNS         , KC_TRNS ,
        KC_LCTL  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                        KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS         , KC_TRNS ,
        KC_A     , KC_B,    KC_C, KC_D,                                                                               KC_E , KC_F , KC_G        , KC_H  ,
        KC_1  , KC_2, KC_3, KC_4, KC_5, KC_6,                                                          KC_7, KC_8  ,  KC_9,  KC_0, KC_EQL ,KC_MINUS
    )
};