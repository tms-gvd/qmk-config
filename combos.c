/* Copyright 2023 ChuseCubr */
/* https://github.com/ChuseCubr/mini-ryoku */

/* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>. */

#include "keycodes.h"

enum combos {
  WF,
  FP,
  XC,
  CD,
  XD,
  LU,
  UY,
  JBSPC,
  HCOMM,
  COMMDOT,
  HDOT,
  GM_CAPS,
};

const uint16_t PROGMEM wf_combo[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM fp_combo[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM xc_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM cd_combo[] = {KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM xd_combo[] = {KC_X, KC_D, COMBO_END};
const uint16_t PROGMEM lu_combo[] = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM uy_combo[] = {KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM jbspc_combo[] = {KC_J, KC_BSPC, COMBO_END};
const uint16_t PROGMEM hcomm_combo[] = {KC_H, KC_COMM, COMBO_END};
const uint16_t PROGMEM commdot_combo[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM hdot_combo[] = {KC_H, KC_DOT, COMBO_END};
const uint16_t PROGMEM gm_combo[] = {KC_G, KC_M, COMBO_END};

combo_t key_combos[] = {
  [WF] = COMBO(wf_combo, CT_WDEL),
  [FP] = COMBO(fp_combo, KC_TAB),
  [XC] = COMBO(xc_combo, OSM(MOD_LCTL)),
  [CD] = COMBO(cd_combo, OSM(MOD_LGUI)),
  [XD] = COMBO(xd_combo, OSM(MOD_LALT)),
  [LU] = COMBO(lu_combo, KC_ENT),
  [UY] = COMBO(uy_combo, KC_ESC),
  [JBSPC] = COMBO(jbspc_combo, TO_FUN),
  [HCOMM] = COMBO(hcomm_combo, OSM(MOD_RGUI)),
  [COMMDOT] = COMBO(commdot_combo, OSM(MOD_RCTL)),
  [HDOT] = COMBO(hdot_combo, OSM(MOD_RALT)),
  [GM_CAPS] = COMBO(gm_combo, KC_CAPS),
};
