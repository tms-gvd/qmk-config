/* Copyright 2023 ChuseCubr */
/* https://github.com/ChuseCubr/mini-ryoku */

/* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>. */

#include "keycodes.h"

/* Defining Combos for non-Vial boards */
enum combos {
  /* LEFT HAND */
  /* TOP ROW */
  // WF,
  FP,
  /* MIDDLE ROW */
  RS,
  ST,
  RT,
  /* BOTTOM ROW */
  CD,
  
  /* RIGHT HAND */
  /* TOP ROW */
  LU,
  // UY,
  JBSPC,
  /* MIDDLE ROW */
  NE,
  EI,
  NI,

  /* BOTH */
  GM_CAPSWORD
};

/* LEFT HAND */
/* TOP ROW */
// const uint16_t PROGMEM wf_combo[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM fp_combo[] = {KC_F, KC_P, COMBO_END};
/* MIDDLE ROW */
const uint16_t PROGMEM rs_combo[] = {KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM st_combo[] = {KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM rt_combo[] = {KC_R, KC_T, COMBO_END};
/* BOTTOM ROW */
const uint16_t PROGMEM cd_combo[] = {KC_C, KC_D, COMBO_END};

/* RIGHT HAND */
/* TOP ROW */
const uint16_t PROGMEM lu_combo[] = {KC_L, KC_U, COMBO_END};
// const uint16_t PROGMEM uy_combo[] = {KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM jbspc_combo[] = {KC_J, KC_BSPC, COMBO_END};
/* MIDDLE ROW */
const uint16_t PROGMEM ne_combo[] = {KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM ei_combo[] = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM ni_combo[] = {KC_N, KC_I, COMBO_END};

/* BOTH */
const uint16_t PROGMEM gm_combo[] = {KC_G, KC_M, COMBO_END};

combo_t key_combos[] = {
  /* LEFT HAND */
  /* TOP ROW */
  // [WF] = COMBO(wf_combo, KC_ENT),
  [FP] = COMBO(fp_combo, KC_TAB),
  /* MIDDLE ROW */
  [RS] = COMBO(rs_combo, OSM(MOD_LCTL)),
  [ST] = COMBO(st_combo, OSM(MOD_LGUI)),
  [RT] = COMBO(rt_combo, OSM(MOD_LALT)),
  /* BOTTOM ROW */
  [CD] = COMBO(cd_combo, OSM(MOD_LALT)),

  /* RIGHT HAND */
  /* TOP ROW */
  [LU] = COMBO(lu_combo, KC_ENT),
  // [UY] = COMBO(uy_combo, KC_TAB),
  [JBSPC] = COMBO(jbspc_combo, TO_FUN),
  /* MIDDLE ROW */
  [NE] = COMBO(ne_combo, OSM(MOD_RGUI)),
  [EI] = COMBO(ei_combo, OSM(MOD_RCTL)),
  [NI] = COMBO(ni_combo, OSM(MOD_RALT)),

  /* BOTH */
  [GM_CAPSWORD] = COMBO_ACTION(gm_combo)
};

// bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
//   switch (get_highest_layer(default_layer_state)) {
// 		/* you can add cases for layers you would like to exclude */
// 		/* for example, I have gaming layers in the `layer_number` enum like so: */
// 		// case _GAME1:
// 		// case _GAME2:
// 		// 	return false;
// 		default:
// 			return true;
//   }
// }

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case GM_CAPSWORD:
      if (pressed) {
        caps_word_on();  // Activate Caps Word!
      }
      break;
	}
}
