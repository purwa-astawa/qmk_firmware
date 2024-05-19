#include QMK_KEYBOARD_H

#define _BASE 0
#define _NAV 1
#define _FUN 2
#define _NUM 3
#define _SYM 4

#define _MAC_BASE 5
#define _MAC_NAV 6
#define _MAC_FUN 7
#define _MAC_NUM 8
#define _MAC_SYM 9

#define _CONFIG 10
#define XXX KC_NO

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)


// Left-hand home row mods
#define MAC_HOME_A LCTL_T(KC_A)
#define MAC_HOME_D LGUI_T(KC_D)

// Right-hand home row mods
#define MAC_HOME_K RGUI_T(KC_K)
#define MAC_HOME_SCLN RCTL_T(KC_SCLN)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC   , KC_Q   , KC_W   , KC_E   , KC_R        , KC_T  ,                     KC_Y     , KC_U        , KC_I    , KC_O           , KC_P            , KC_MINUS,
        KC_LALT  , HOME_A , HOME_S , HOME_D , HOME_F      , KC_G  ,                     KC_H     , HOME_J      , HOME_K  , HOME_L         , HOME_SCLN       , KC_QUOTE,
        KC_LSFT  , KC_Z   , KC_X   , KC_C   , KC_V        , KC_B  ,                     KC_N     , KC_M        , KC_COMM , KC_DOT         , KC_SLSH         , KC_BSLS ,
                                      LT(_CONFIG, KC_DEL),  KC_LGUI,                    KC_WH_D  , KC_WH_U,
                  LT(_NAV, KC_GRV),    KC_SPC,  LT(_FUN, KC_TAB),                     LT(_SYM, KC_ESC), LSFT_T(KC_ENT), LT(_NUM, KC_BSPC)
    ),
    [_NAV] = LAYOUT(
        KC_TAB   ,     XXX,     XXX,     XXX,          XXX,     XXX,                    KC_HOME  , KC_PGUP     , KC_PGDN , KC_END         , XXX             , KC_EQL,
        XXX      , KC_LGUI, KC_LALT, KC_LCTL,       KC_LSFT,    XXX,                    KC_LEFT  , KC_DOWN     , KC_UP   , KC_RIGHT       , XXX             , KC_UNDS,
        XXX      ,     XXX,     XXX,     XXX,           XXX,    XXX,                    XXX      , XXX         , XXX     , XXX            , XXX             , KC_PIPE,
                                                  KC_TRNS,  KC_TRNS,                    KC_BSPC  , KC_DEL,
                                      KC_TRNS,    KC_TRNS,  KC_TRNS,                    KC_TRNS  , KC_TRNS, KC_TRNS
    ),
    [_FUN] = LAYOUT(
        KC_TAB   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS     , KC_TRNS,                    KC_F1    , KC_F2       , KC_F3   , KC_F4          , KC_F5           , KC_F6,
        KC_TRNS  , KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT     , KC_TRNS,                    KC_F7    , KC_F8       , KC_F9   , KC_F10          , KC_F11          , KC_F12,
        KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS     , KC_PSCR,                    KC_PSCR  , KC_TRNS     , KC_TRNS , KC_TRNS        , KC_TRNS         , KC_TRNS,
                                                  KC_TRNS,  KC_TRNS,                    KC_TRNS  , KC_TRNS,
                                      KC_TRNS,    KC_TRNS,  KC_TRNS,                    KC_TRNS  , KC_TRNS, KC_TRNS
    ),
    [_NUM] = LAYOUT(
        KC_PLUS  , KC_MINUS, KC_7   , KC_8   , KC_9        , KC_LPRN,                   XXX      , XXX         , XXX     , XXX            , XXX             ,  XXX,
        KC_ASTR  , KC_SLSH , KC_4   , KC_5   , KC_6        , KC_0   ,                   XXX      , KC_LSFT     , KC_LCTL , KC_LALT        , KC_LGUI         ,  XXX,
        KC_EQL   , KC_PERC , KC_1   , KC_2   , KC_3        , KC_RPRN,                   XXX      , XXX         , XXX     , XXX            , XXX             ,  XXX,
                                                  KC_COMM  ,  KC_DOT,                   KC_TRNS  , KC_TRNS,
                                      KC_TRNS,    KC_TRNS,  KC_TRNS,                    KC_TRNS  , KC_TRNS, KC_TRNS
    ),
    [_SYM] = LAYOUT(
        KC_GRV   , KC_EXLM , KC_AT  , KC_HASH, KC_DLR      , KC_CIRC,                   XXX      , XXX         , XXX     , XXX            , XXX             ,  XXX,
        KC_TILD  , KC_AMPR , KC_LCBR, KC_RCBR, KC_LPRN     , KC_RPRN,                   XXX      , KC_LSFT     , KC_LCTL , KC_LALT        , KC_LGUI         ,  XXX,
        KC_EQL   , KC_PIPE , KC_LBRC, KC_RBRC, KC_LT       ,   KC_GT,                   XXX      , XXX         , XXX     , XXX            , XXX             ,  XXX,
                                                  KC_COMM   ,  KC_DOT,                   KC_TRNS  , KC_TRNS,
                                      KC_TRNS,    KC_TRNS,  KC_TRNS,                    KC_TRNS  , KC_TRNS, KC_TRNS
    ),
    [_MAC_BASE] = LAYOUT(
        KC_ESC   , KC_Q   , KC_W   , KC_E   , KC_R        , KC_T  ,                     KC_Y     , KC_U        , KC_I    , KC_O           , KC_P            , KC_MINUS,
        KC_LALT  , MAC_HOME_A , HOME_S , MAC_HOME_D , HOME_F, KC_G,                     KC_H     , HOME_J      , MAC_HOME_K, HOME_L       , MAC_HOME_SCLN   , KC_QUOTE,
        KC_LSFT  , KC_Z   , KC_X   , KC_C   , KC_V        , KC_B  ,                     KC_N     , KC_M        , KC_COMM , KC_DOT         , KC_SLSH         , KC_BSLS ,
                                      LT(_CONFIG, KC_DEL),  KC_LGUI,                    KC_WH_D  , KC_WH_U,
                  LT(_MAC_NAV, KC_GRV),    KC_SPC,  LT(_MAC_FUN, KC_TAB),                     LT(_MAC_SYM, KC_ESC), LSFT_T(KC_ENT), LT(_MAC_NUM, KC_BSPC)
    ),
    [_MAC_NAV] = LAYOUT(
        KC_TAB   ,     XXX,     XXX,     XXX,          XXX,     XXX,                    KC_HOME  , KC_PGUP     , KC_PGDN , KC_END         , XXX             , KC_EQL,
        XXX      , KC_LCTL, KC_LALT,  KC_LGUI,      KC_LSFT,    XXX,                    KC_LEFT  , KC_DOWN     , KC_UP   , KC_RIGHT       , XXX             , KC_UNDS,
        XXX      ,     XXX,     XXX,     XXX,           XXX,    XXX,                    XXX      , XXX         , XXX     , XXX            , XXX             , KC_PIPE,
                                                  KC_TRNS,  KC_TRNS,                    KC_BSPC  , KC_DEL,
                                      KC_TRNS,    KC_TRNS,  KC_TRNS,                    KC_TRNS  , KC_TRNS, KC_TRNS
    ),
    [_MAC_FUN] = LAYOUT(
        KC_TAB   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS     , KC_TRNS,                    KC_F1    , KC_F2       , KC_F3   , KC_F4          , KC_F5           , KC_F6,
        KC_TRNS  , KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT     , KC_TRNS,                    KC_F7    , KC_F8       , KC_F9   , KC_F10          , KC_F11          , KC_F12,
        KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS     , KC_PSCR,                    KC_PSCR  , KC_TRNS     , KC_TRNS , KC_TRNS        , KC_TRNS         , KC_TRNS,
                                                  KC_TRNS,  KC_TRNS,                    KC_TRNS  , KC_TRNS,
                                      KC_TRNS,    KC_TRNS,  KC_TRNS,                    KC_TRNS  , KC_TRNS, KC_TRNS
    ),
    [_MAC_NUM] = LAYOUT(
        KC_PLUS  , KC_MINUS, KC_7   , KC_8   , KC_9        , KC_LPRN,                   XXX      , XXX         , XXX     , XXX            , XXX             ,  XXX,
        KC_ASTR  , KC_SLSH , KC_4   , KC_5   , KC_6        , KC_0   ,                   XXX      , KC_LSFT     , KC_LGUI , KC_LALT        , KC_LCTL         ,  XXX,
        KC_EQL   , KC_PERC , KC_1   , KC_2   , KC_3        , KC_RPRN,                   XXX      , XXX         , XXX     , XXX            , XXX             ,  XXX,
                                                  KC_COMM  ,  KC_DOT,                   KC_TRNS  , KC_TRNS,
                                      KC_TRNS,    KC_TRNS,  KC_TRNS,                    KC_TRNS  , KC_TRNS, KC_TRNS
    ),
    [_MAC_SYM] = LAYOUT(
        KC_GRV   , KC_EXLM , KC_AT  , KC_HASH, KC_DLR      , KC_CIRC,                   XXX      , XXX         , XXX     , XXX            , XXX             ,  XXX,
        KC_TILD  , KC_AMPR , KC_LCBR, KC_RCBR, KC_LPRN     , KC_RPRN,                   XXX      , KC_LSFT     , KC_LGUI , KC_LALT        , KC_LCTL         ,  XXX,
        KC_EQL   , KC_PIPE , KC_LBRC, KC_RBRC, KC_LT       ,   KC_GT,                   XXX      , XXX         , XXX     , XXX            , XXX             ,  XXX,
                                                  KC_COMM   ,  KC_DOT,                   KC_TRNS  , KC_TRNS,
                                      KC_TRNS,    KC_TRNS,  KC_TRNS,                    KC_TRNS  , KC_TRNS, KC_TRNS
    ),
    [_CONFIG] = LAYOUT(
        XXX      , XXX    , XXX    , XXX    , XXX         , QK_BOOT,                    XXX     , XXX         , XXX     , XXX            , XXX             , XXX,
        XXX      , XXX    , XXX    , XXX    , XXX         , XXX    ,                    KC_MPLY , KC_MPRV     , KC_VOLD , KC_VOLU        , KC_MNXT         , XXX,
        XXX      , XXX    , XXX    , XXX    , XXX         , XXX    ,                    XXX     , XXX         , XXX     , XXX            , XXX             , XXX ,
                                                       KC_TRNS, XXX,                    DF(_BASE), DF(_MAC_BASE),
                                                      XXX, XXX, XXX,                    XXX, XXX, XXX
    ),
};


// void keyboard_post_init_user(void) {
// //   // Customise these values to desired behaviour
//   debug_enable=true;
//   debug_matrix=true;
//   debug_keyboard=true;
// //   //debug_mouse=true;
// }

// RGB
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _MAC_BASE:
            rgblight_disable();
            break;
        default: // for any other layers, or the default layer
            rgblight_setrgb(RGB_WHITE);
            break;
    }
  return state;
}
