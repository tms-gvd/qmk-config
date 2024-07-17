/* Copyright 2023 ChuseCubr */
/* https://github.com/ChuseCubr/mini-ryoku */

/* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>. */

#include "keycodes.h"

#pragma once

/* Layout */

#define _BASE_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
       KC_Q    , KC_W    , KC_F    , KC_P    , KC_B    ,      KC_J    , KC_L    , KC_U    , KC_Y    , KC_BSPC ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
       KC_A    , KC_R    , KC_S    , KC_T    , KC_G    ,      KC_M    , KC_N    , KC_E    , KC_I    , KC_O    ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
       KC_Z    , KC_X    , KC_C    , KC_D    , KC_V    ,      KC_K    , KC_H    , KC_COMM , KC_DOT  , KC_SLSH ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
                                     LT_SYM  , KC_SPC  ,      OS_LSFT , LT_NUM 
/*                                 `-------------------'    `-------------------'                                 */

#define _SYM_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
       KC_NO   , KC_BSLS , KC_PERC , KC_CIRC , OS_LALT ,      OS_LALT , KC_DLR  , KC_LCBR , KC_RCBR , KC_DEL  ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
       KC_TILD , KC_LPRN , KC_RPRN , KC_COLN , OS_LGUI ,      OS_LGUI , KC_DQUO , KC_LBRC , KC_RBRC , KC_SCLN ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
       TO_NAV  , KC_GRV  , KC_AT   , KC_AMPR , KC_NO   ,      KC_NO   , KC_HASH , KC_LT   , KC_GT   , KC_NO   ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
                                     KC_NO   , KC_NO   ,      KC_ESC  , LT_NAV
/*                                 `-------------------'    `-------------------'                                 */

#define _NUM_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
       KC_NO   , KC_6    , KC_5    , KC_4    , OS_LALT ,      OS_LALT , KC_PLUS , KC_MINS , KC_ASTR , KC_DEL  ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
       KC_DOT  , KC_3    , KC_2    , KC_1    , OS_LGUI ,      OS_LGUI , KC_QUOT , KC_UNDS , KC_EQL  , KC_COMM ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
       KC_NO   , KC_9    , KC_8    , KC_7    , KC_NO   ,      KC_NO   , KC_PIPE , KC_NO   , KC_EXLM , KC_NO   ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
                                     KC_0    , KC_SPC  ,      KC_NO   , KC_NO
/*                                 `-------------------'    `-------------------'                                 */

#define _NAV_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
       KC_NO   , CT_CUT  , CT_COPY , CT_PSTE , KC_NO   ,      KC_NO   , KC_TAB  , CT_TMUX , KC_NO   , KC_BSPC ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
       OS_LSFT , OS_LCTL , OS_LALT , OS_LGUI , KC_NO   ,      KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , KC_ENT  ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
       KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,      KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_DEL  ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
                                     KC_NO   , KC_NO   ,      KC_LSFT , TO_HOME
/*                                 `-------------------'    `-------------------'                                 */

#define _FUN_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
       KC_NO   , KC_F6   , KC_F5   , KC_F4   , KC_F10  ,      KC_NO   , KC_NO   , KC_BRID , KC_BRIU , KC_NO   ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
       KC_NO   , KC_F3   , KC_F2   , KC_F1   , KC_F11  ,      KC_NO   , KC_MUTE , KC_VOLD , KC_VOLU , KC_NO   ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
       KC_NO   , KC_F9   , KC_F8   , KC_F7   , KC_NO   ,      KC_NO   , KC_MPRV , KC_MPLY , KC_MNXT , KC_NO   ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
                                     KC_F12  , KC_NO   ,      KC_LSFT , TO_HOME
/*                                 `-------------------'    `-------------------'                                 */

