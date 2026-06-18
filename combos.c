/* Copyright 2023 ChuseCubr */
/* https://github.com/ChuseCubr/mini-ryoku */

/* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>. */

#include "keycodes.h"

/* Defining Combos for non-Vial boards */
enum combos {
  /* LEFT HAND */
  /* TOP ROW */
  WF,
  FP,
  /* MIDDLE ROW */
  // RS,
  // ST,
  // RT,
  /* BOTTOM ROW */
  XC,
  CD,
  XD,
  
  /* RIGHT HAND */
  /* TOP ROW */
  LU,
  UY,
  JBSPC,
  /* MIDDLE ROW */
  // NE,
  // EI,
  // NI,
  /* BOTTOM ROW */
  HCOMM,
  COMMDOT,
  HDOT,

  /* BOTH */
  GM_CAPS
};

/* LEFT HAND */
/* TOP ROW */
const uint16_t PROGMEM wf_combo[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM fp_combo[] = {KC_F, KC_P, COMBO_END};
/* MIDDLE ROW */
const uint16_t PROGMEM rs_combo[] = {KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM st_combo[] = {KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM rt_combo[] = {KC_R, KC_T, COMBO_END};
/* BOTTOM ROW */
const uint16_t PROGMEM xc_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM cd_combo[] = {KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM xd_combo[] = {KC_X, KC_D, COMBO_END};

/* RIGHT HAND */
/* TOP ROW */
const uint16_t PROGMEM lu_combo[] = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM uy_combo[] = {KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM jbspc_combo[] = {KC_J, KC_BSPC, COMBO_END};
/* MIDDLE ROW */
const uint16_t PROGMEM ne_combo[] = {KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM ei_combo[] = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM ni_combo[] = {KC_N, KC_I, COMBO_END};
/* BOTTOM ROW */
const uint16_t PROGMEM hcomm_combo[] = {KC_H, KC_COMM, COMBO_END};
const uint16_t PROGMEM commdot_combo[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM hdot_combo[] = {KC_H, KC_DOT, COMBO_END};

/* BOTH */
const uint16_t PROGMEM gm_combo[] = {KC_G, KC_M, COMBO_END};

combo_t key_combos[] = {
  /* LEFT HAND */
  /* TOP ROW */
  [WF] = COMBO(wf_combo, CT_WDEL),
  [FP] = COMBO(fp_combo, KC_TAB),
  /* MIDDLE ROW */
  // [RS] = COMBO(rs_combo, OSM(MOD_LCTL)),
  // [ST] = COMBO(st_combo, OSM(MOD_LGUI)),
  // [RT] = COMBO(rt_combo, OSM(MOD_LALT)),
  /* BOTTOM ROW */
  [XC] = COMBO(xc_combo, OSM(MOD_LCTL)),
  [CD] = COMBO(cd_combo, OSM(MOD_LGUI)),
  [XD] = COMBO(xd_combo, OSM(MOD_LALT)),

  /* RIGHT HAND */
  /* TOP ROW */
  [LU] = COMBO(lu_combo, KC_ENT),
  [UY] = COMBO(uy_combo, KC_BSPC),
  [JBSPC] = COMBO(jbspc_combo, TO_FUN),
  /* MIDDLE ROW */
  // [NE] = COMBO(ne_combo, OSM(MOD_RGUI)),
  // [EI] = COMBO(ei_combo, OSM(MOD_RCTL)),
  // [NI] = COMBO(ni_combo, OSM(MOD_RALT)),
  /* BOTTOM ROW */
  [HCOMM] = COMBO(hcomm_combo, OSM(MOD_RGUI)),
  [COMMDOT] = COMBO(commdot_combo, OSM(MOD_RCTL)),
  [HDOT] = COMBO(hdot_combo, OSM(MOD_RALT)),

  /* BOTH */
  [GM_CAPS] = COMBO(gm_combo, KC_CAPS)
};
