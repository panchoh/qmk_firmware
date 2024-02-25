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

#pragma once

// https://docs.qmk.fm/#/tap_hold?id=hold-on-other-key-press
#define HOLD_ON_OTHER_KEY_PRESS

// https://docs.qmk.fm/#/tap_hold?id=retro-tapping
#define RETRO_TAPPING

// Left Control when pressed, Escape when tapped.
#define CTL_ESC_T LCTL_T(KC_ESC)

// overrides go here!

#ifdef RGB_MATRIX_ENABLE
#    undef RGB_MATRIX_KEYPRESSES
#    undef RGB_MATRIX_KEYRELEASES
#    undef RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
#    define RGB_MATRIX_DEFAULT_VAL 0
#endif
