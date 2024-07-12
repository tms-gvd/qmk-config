/* Copyright 2023 ChuseCubr */
/* https://github.com/ChuseCubr/mini-ryoku */

/* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>. */

#pragma once

/* On all layers */
#define MT_SPC LSFT_T(KC_SPC)
#define MT_ENT RCTL_T(KC_ENT)
#define OS_LSFT OSM(MOD_LSFT)

/* Base Layer */
// left hand
#define MT_S LALT_T(KC_S)
#define MT_T LGUI_T(KC_T)
// right hand
#define MT_N RGUI_T(KC_N)
#define MT_E RALT_T(KC_E)

/* Sym Layer */
// left hand
#define MT_RPRN LALT_T(KC_RPRN)
#define MT_COLN LGUI_T(KC_COLN)
// right hand
#define MT_DQUO RGUI_T(KC_DQUO)
#define MT_LBRC RALT_T(KC_LBRC)

/* Num Layer */
// left hand
#define MT_2 LALT_T(KC_2)
#define MT_1 LGUI_T(KC_1)
// right hand
#define MT_QUOT RGUI_T(KC_QUOT)
#define MT_UNDS RALT_T(KC_UNDS)

/* Fun Layer */
// left hand
// #define MT_F2 LALT_T(KC_F2)
// #define MT_F1 LGUI_T(KC_F1)

/* Layers */
#define TO_HOME TO(_HOME)
#define TO_FUN TO(_FUN)
#define TO_NAV TO(_NAV)
// to num and sym layers: holding or one-shot
#define LT_NUM LT(_NUM, KC_NO)
#define LT_SYM LT(_SYM, KC_NO)
#define LT_NAV LT(_NAV, KC_NO)
