#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC  , KC_1   , KC_2  , KC_3  , KC_4  , KC_5  , KC_F12  ,      
        KC_TAB  , KC_Q   , KC_W  , KC_E  , KC_R  , KC_T  , KC_LBRC ,   
        KC_LALT , KC_A   , KC_S  , KC_D  , KC_F  , KC_G  , KC_PIPE ,   
        KC_LCTL , KC_Z   , KC_X  , KC_C  , KC_V  , KC_B  ,                    
        KC_Y    , KC_U   , KC_I  , KC_0  ,                                              
        KC_P    , KC_H   , KC_J  , KC_K  , KC_L  ,KC_SCLN                 
    )
};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   // If console is enabled, it will print the matrix position and status of each key pressed
// #ifdef CONSOLE_ENABLE
//     uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
// #endif 
//   return true;
// }

// void keyboard_post_init_user(void) {
//   // Customise these values to desired behaviour
//   debug_enable=true;
//   debug_matrix=true;
//   //debug_keyboard=true;
//   //debug_mouse=true;
// }
