#include QMK_KEYBOARD_H

const led_config_t PROGMEM initial_led_config = {
  {
    { 0 }
  },
  {
    { 0, 0 }
  },
  {
    4
  }
};

led_config_t g_led_config = { 
  {
    { 0 }
  },
  {
    { 0, 0 }
  },
  {
    4
  }
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] =LAYOUT_ortho_1x1(
       KC_W
    )
};

void keyboard_post_init_user(void) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(HSV_OFF);
}
