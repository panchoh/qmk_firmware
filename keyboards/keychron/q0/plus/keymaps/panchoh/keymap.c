// SPDX-License-Identifier: GPL-3.0-or-later
/*
 * Copyright © 2023-2024 pancho horrillo <pancho@pancho.name>
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
    BASE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_numpad_6x5(
        KC_MPLY,  MC_6,     MC_7,     MC_8,     MC_9,
        MC_1,     KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        MC_2,     KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
        MC_3,     KC_P4,    KC_P5,    KC_P6,
        MC_4,     KC_P1,    KC_P2,    KC_P3,    KC_PENT,
        MC_5,     KC_P0,              KC_PDOT),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [BASE] = { ENCODER_CCW_CW(KC_MRWD, KC_MFFD) },
};
#endif // ENCODER_MAP_ENABLE

// clang-format on
//
// https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md
/* void keyboard_post_init_user(void) { */
/*     if (rgb_matrix_config.enable) { */
/*         rgb_matrix_set_flags(LED_FLAG_NONE); */
/*         rgb_matrix_set_color_all(0, 0, 0); */
/*         rgb_matrix_set_color_all(RGB_OFF); */
/*     } */
/* } */

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        default:
            return true; // Process all other keycodes normally
        case MC_1:
            if (record->event.pressed) {
                SEND_STRING("z copito\n");
            }
            return false; // Skip all further processing of this key
        case MC_2:
            if (record->event.pressed) {
                SEND_STRING("task bump\n");
            }
            return false; // Skip all further processing of this key
        case MC_3:
            if (record->event.pressed) {
                SEND_STRING("run0 nixos-rebuild switch\n");
            }
            return false; // Skip all further processing of this key
        case MC_4:
            if (record->event.pressed) {
                SEND_STRING("nixos-rebuild repl\n");
            }
            return false; // Skip all further processing of this key
        case MC_5:
            if (record->event.pressed) {
                SEND_STRING("task pristine\n");
            }
            return false; // Skip all further processing of this key
        case MC_6:
            if (record->event.pressed) {
                SEND_STRING("systemctl --user start emacs.service\n");
            }
            return false; // Skip all further processing of this key
        case MC_7:
            if (record->event.pressed) {
                SEND_STRING("systemctl --user restart emacs.service\n");
            }
            return false; // Skip all further processing of this key
        case MC_8:
            if (record->event.pressed) {
                SEND_STRING("systemctl --user stop emacs.service\n");
            }
            return false; // Skip all further processing of this key
        case MC_9:
            if (record->event.pressed) {
                SEND_STRING("systemctl --user stop emacs.socket\n");
            }
            return false; // Skip all further processing of this key
    }
};
