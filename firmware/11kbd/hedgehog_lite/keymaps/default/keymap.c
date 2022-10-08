// Copyright 2022 CMM.Studio Freather
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define ____ KC_TRNS

enum layers{
  _BASE,
  _FN
};

// Keymaps
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_GRV,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, TG(1),
        KC_LALT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_DQUO, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_SPC, KC_RGUI, MO(1), MO(1)
    ),

    [_FN] = LAYOUT(
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, RGB_VAD, RGB_VAI, ____, ____,
        RGB_TOG, ____, KC_UP, ____, ____, ____, ____, ____, ____, ____, ____, RGB_MODE_REVERSE, RGB_MODE_FORWARD, ____, TG(1),
        ____, KC_LEFT, KC_DOWN, KC_RIGHT, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, MO(1), MO(1)
    ),

};
