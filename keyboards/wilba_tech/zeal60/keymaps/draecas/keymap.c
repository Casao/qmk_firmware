// HHKB layout for Zeal60
#include QMK_KEYBOARD_H

#define _DEFAULT 0
#define _FN 1
#define _LIGHTS 2
#define _ARROWS 3

#define KC_LCE LCTL_T(KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Default layer
[_DEFAULT] = LAYOUT_60_hhkb(
    KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_PGDN,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
    KC_LCE, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, TT(_FN),
    KC_LALT, KC_LCMD, KC_SPC, KC_RCMD, KC_RALT
),
// Fn1 Layer
[_FN] = LAYOUT_60_hhkb(
    KC_PWR, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS, KC_PGUP,
    KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP, KC_NO, KC_DEL,
    KC_NO, KC_VOLD, KC_VOLU, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_NO,
    KC_NO, BL_DEC, BL_INC, BL_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_END, KC_PGDN, KC_DOWN, MO(_LIGHTS), _______,
    KC_NO, KC_NO, KC_MPLY, KC_MSTP, KC_NO
),
// Fn2 Layer
[_LIGHTS] = LAYOUT_60_hhkb(
    RESET, RGB_MODE_PLAIN, RGB_MODE_BREATHE, RGB_MODE_RAINBOW, RGB_MODE_SWIRL, RGB_MODE_SNAKE, RGB_MODE_KNIGHT, RGB_MODE_XMAS, RGB_MODE_GRADIENT, KC_NO, KC_NO, ES_DEC, ES_INC, KC_NO, AG_TOGG,
    DEBUG, H1_DEC, H1_INC, H2_DEC, H2_INC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAD, RGB_VAI, KC_NO,
    KC_NO, S1_DEC, S1_INC, S2_DEC, S2_INC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_MOD, RGB_TOG,
    KC_NO, BR_DEC, BR_INC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, EF_DEC, EF_INC, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
),
// Fn3 Layer (zeal60 Configuration)
[_ARROWS] = LAYOUT_60_hhkb(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MAGIC_TOGGLE_ALT_GUI:
      if (record->event.pressed) {
        keymap_config.swap_lalt_lgui = !keymap_config.swap_lalt_lgui;
        keymap_config.swap_ralt_rgui = !keymap_config.swap_ralt_rgui;
      }
      return false;
      break;
  }
  return true;
}
