/*
Copyright 2017 Luiz Ribeiro <luizribeiro@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "split75.h"

#include QMK_KEYBOARD_H

#define _DEFAULT 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = KEYMAP(
                            KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_INS, KC_DEL, \
        KC_P9,KC_P0,        KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPC, KC_BSPC, KC_HOME, \
        KC_P7,KC_P8,        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP, \
        KC_P5,KC_P6,        LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENTER, KC_ENTER, KC_PGDN, \
        KC_P3,KC_P4,        KC_LSFT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_END, \
        KC_P1,KC_P2,        KC_LCTL, KC_LALT, MO(_FN), KC_LCMD, LCMD_T(KC_SPC), KC_SPC, KC_RCMD, MO(_FN), KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT \
    ),
    [1] = KEYMAP(
                            RESET, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, AG_TOGG,    \
        KC_TRNS, KC_TRNS,   KC_GRV,  RGB_MODE_PLAIN, RGB_MODE_BREATHE, RGB_MODE_RAINBOW, RGB_MODE_SWIRL, RGB_MODE_SNAKE, RGB_MODE_KNIGHT, RGB_MODE_XMAS, RGB_MODE_GRADIENT,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   \
        KC_TRNS, KC_TRNS,   KC_CAPS, KC_NO, KC_NO,   KC_NO,   RGB_TOG,RGB_VAI,RGB_HUI,RGB_SAI,KC_INS, RESET,   KC_PSCR, KC_SLCK,  KC_PAUS, KC_BSLS,  KC_SLCK,   \
        KC_TRNS, KC_TRNS,   KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE,RGB_MOD,RGB_VAD,RGB_HUD,RGB_SAD,KC_NO,  KC_NO,   KC_F14,  KC_F15,   KC_INS,  KC_INS,   KC_HOME,   \
        KC_TRNS, KC_TRNS,   KC_LSFT, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT,KC_NO,  BL_TOGG,KC_NO,  KC_MUTE,KC_VOLD, KC_VOLU, KC_NO,    KC_RSFT, RGB_MOD,  KC_END,    \
        KC_TRNS, KC_TRNS,   KC_LCTL, KC_LGUI, KC_NO,     RESET, RESET, RESET,                  KC_TRNS,   KC_RCTL, KC_TRNS,  KC_HOME, BL_STEP,  KC_END
    )
};

void matrix_init_user(void) {
}
