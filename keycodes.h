/* Copyright 2023 ChuseCubr */
/* https://github.com/ChuseCubr/mini-ryoku */

/* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>. */

#pragma once

/* On all layers */
#define OS_LSFT OSM(MOD_LSFT)
#define OS_LCTL OSM(MOD_LCTL)
#define OS_LALT OSM(MOD_LALT)
#define OS_LGUI OSM(MOD_LGUI)

/* Editing */
#define CT_WDEL LALT(KC_BSPC) // delete word backward (macOS)

/* Nav Layer */
#define CT_CUT LGUI(KC_X)
#define CT_COPY LGUI(KC_C)
#define CT_PSTE LGUI(KC_V)
#define CT_TMUX LCTL(KC_B)
#define CT_AIG LALT(KC_E)
#define CT_GRV LALT(KC_GRV)
#define CT_CIRC LALT(KC_U)
#define CT_TREM LALT(KC_I)
#define CT_PSCR LGUI(LSFT(KC_5))
#define CT_AGUI LALT(KC_LGUI)
#define CT_CGUI LCTL(KC_LGUI)

/* Layers */
#define TO_HOME TO(_HOME)
#define TO_FUN TO(_FUN)
#define TO_NAV TO(_NAV)
// to num and sym layers: holding or one-shot
#define LT_NUM MO(_NUM)
#define LT_SYM MO(_SYM)
#define LT_NAV MO(_NAV)
