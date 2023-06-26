// SPDX-License-Identifier: GPL-3.0-or-later
/*
 * Copyright © 2023-2025 pancho horrillo <pancho@pancho.name>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// clang-format off

enum layers {
    LNX_BASE,
    WIN_BASE,
    L_FN,
    W_FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LNX_BASE] = LAYOUT_ansi_69(
        KC_GRV,    KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,     KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_MUTE,
        KC_TAB,    KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,     KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGUP,
        CTL_ESC_T, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,              KC_H,     KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,             KC_PGDN,
        SC_LSPO,             KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,     KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  SC_RSPC,  KC_UP,
        KC_LCTL,   KC_LALT,  KC_LGUI,           KC_SPC,           MO(L_FN), MO(L_FN),          KC_SPC,            KC_RALT,            KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_BASE] = LAYOUT_ansi_69(
        QK_GESC,   KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,     KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_MUTE,
        KC_TAB,    KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,     KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGUP,
        KC_CAPS,   KC_A,     KC_S,     KC_D,    KC_F,    KC_G,              KC_H,     KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,             KC_PGDN,
        KC_LSFT,             KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,     KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,
        KC_LCTL,   KC_LALT,  KC_LGUI,           KC_SPC,           MO(W_FN), MO(W_FN),          KC_SPC,            KC_RALT,            KC_LEFT,  KC_DOWN,  KC_RGHT),

    [L_FN] = LAYOUT_ansi_69(
        _______,   KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,    KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_DEL,             KC_PSCR,
        _______,   _______,  _______,  _______, _______, _______, _______,  _______,  _______, _______, _______,  _______,  _______,  _______,            _______,
        KC_CAPS,   _______,  _______,  _______, _______, _______,           _______,  _______, _______, _______,  _______,  _______,  _______,            _______,
        _______,             _______,  _______, _______, _______, _______,  _______,  _______, _______, _______,  _______,  _______,  _______,  KC_PGUP,
        KC_RCTL,   _______,  KC_RGUI,           _______,          _______,  _______,           _______,           _______,            KC_HOME,  KC_PGDN,  KC_END),

    [W_FN] = LAYOUT_ansi_69(
        _______,   KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,    KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_DEL,             KC_PSCR,
        _______,   _______,  _______,  _______, _______, _______, _______,  _______,  _______, _______, _______,  _______,  _______,  _______,            _______,
        _______,   _______,  _______,  _______, _______, _______,           _______,  _______, _______, _______,  _______,  _______,  _______,            _______,
        _______,             _______,  _______, _______, _______, _______,  _______,  _______, _______, _______,  _______,  _______,  _______,  KC_PGUP,
        _______,   _______,  _______,           _______,          _______,  _______,           _______,           _______,            KC_HOME,  KC_PGDN,  KC_END),
};

// clang-format on
