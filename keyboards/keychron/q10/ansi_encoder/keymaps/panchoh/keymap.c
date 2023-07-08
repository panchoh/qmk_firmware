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
    L_FN,
    WIN_BASE,
    W_FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LNX_BASE] = LAYOUT_ansi_89(
        KC_MUTE,  KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_INS,             KC_DEL,
        MC_1,     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
        MC_2,     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
        MC_3,     CTL_ESC_T,KC_A,     KC_S,     KC_D,     KC_F,     KC_G,      KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
        MC_4,     SC_LSPO,            KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  SC_RSPC,  KC_UP,
        MC_5,     KC_LCTL,  KC_LALT,            KC_LGUI,  KC_SPC,   MO(L_FN),                      KC_SPC,             KC_RALT,                      KC_LEFT,  KC_DOWN,  KC_RGHT),

    [L_FN] = LAYOUT_ansi_89(
        KC_PSCR,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,            _______,
        MC_6,     _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_DEL,             _______,
        MC_7,     _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        MC_8,     KC_CAPS,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        MC_9,     _______,            _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PGUP,
        MC_10,    KC_RCTL,  _______,            KC_RGUI,  _______,  _______,                       _______,            _______,                      KC_HOME,  KC_PGDN,  KC_END),

    [WIN_BASE] = LAYOUT_ansi_89(
        KC_MUTE,  KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_INS,             KC_DEL,
        XXXXXXX,  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
        XXXXXXX,  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
        XXXXXXX,  KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,      KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
        XXXXXXX,  KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,
        XXXXXXX,  KC_LCTL,  KC_LALT,            KC_LGUI,  KC_SPC,   MO(W_FN),                      KC_SPC,             KC_RALT,                      KC_LEFT,  KC_DOWN,  KC_RGHT),

    [W_FN] = LAYOUT_ansi_89(
        KC_PSCR,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_DEL,             _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  _______,            _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PGUP,
        _______,  _______,  _______,            _______,  _______,  _______,                       _______,            _______,                      KC_HOME,  KC_PGDN,  KC_END),
};

// clang-format on

// Actions Palette:
// SEND_STRING(" hrf");
// SEND_STRING(SS_LGUI("\n"));
// SEND_STRING(SS_LGUI("f") SS_DELAY(100) SS_LGUI("f"));
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        default:
            return true; // Process all other keycodes normally
        case MC_1:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_ALT) {
                    clear_mods();
                    SEND_STRING("zoxide remove .\n");
                } else {
                    clear_mods();
                    SEND_STRING("z copito\n");
                }
            }
            return false; // Skip all further processing of this key
        case MC_2:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_ALT) {
                    clear_mods();
                    SEND_STRING("git restore flake.lock\n");
                } else {
                    clear_mods();
                    SEND_STRING("task bump\n");
                }
            }
            return false; // Skip all further processing of this key
        case MC_3:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_ALT) {
                    clear_mods();
                    SEND_STRING("nixos-rebuild build\n");
                } else {
                    clear_mods();
                    SEND_STRING("run0 nixos-rebuild switch\n");
                }
            }
            return false; // Skip all further processing of this key
        case MC_8:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_ALT) {
                    clear_mods();
                    SEND_STRING("run0 nixos-rebuild test\n");
                } else {
                    clear_mods();
                    SEND_STRING("nixos-rebuild repl\n");
                }
            }
            return false; // Skip all further processing of this key
        case MC_4:
            if (record->event.pressed) {
                clear_mods();
                SEND_STRING("task pristine\n");
            }
            return false; // Skip all further processing of this key
        case MC_5:
            if (record->event.pressed) {
                clear_mods();
                SEND_STRING("pancho@pancho.name\n");
            }
            return false; // Skip all further processing of this key
    }
};
