/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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

// TODO: MOD 3, MOD 4, delete _ADJUST
// Might need to use s(KC_) for shift, and not sure if a(KC_) works for alt?

#include QMK_KEYBOARD_H

enum planck_layers {
  _DEFAULT,
  _LAYER_1,
  _LAYER_2,
  _LAYER_3,
  _LAYER_4
};

#define LAYER_1 MO(_LAYER_1)
#define LAYER_2 MO(_LAYER_2)
#define LAYER_3 MO(_LAYER_3)
#define LAYER_4 MO(_LAYER_4)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/* DEFAULT
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │ Tab  │ Q    │ W    │ E    │ R    │ T    │ Y    │ U    │ I    │ O    │ P    │ Å    │
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Esc  │ A    │ S    │ D    │ F    │ G    │ H    │ J    │ K    │ L    │ Ö    │ Ä    │
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Shift│ Z    │ X    │ C    │ V    │ B    │ N    │ M    │ ,    │ .    │ -    │ Enter│
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┴──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Ctrl │Layer4│ Alt  │ GUI  │Layer3│    Space    │Layer1│Layer2│ GUI  │ Ctrl │ Shift│
 * │      │      │      │      │      │             │      │      │      │      │      │
 * └──────┴──────┴──────┴──────┴──────┴─────────────┴──────┴──────┴──────┴──────┴──────┘
 */
[_DEFAULT] = LAYOUT_planck_grid(
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
    KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT ,
    KC_LCTL, LAYER_4, KC_LGUI, KC_LALT, LAYER_3, KC_SPC, KC_SPC, LAYER_1, LAYER_2, KC_RALT, KC_RCTL, KC_RSFT
),

/* LAYER 1
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │ Tab  │ 1    │ 2    │ 3    │ 4    │ 5    │ 6    │ 7    │ 8    │ 9    │ 0    │Bckspc│
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Esc  │ '    │ "    │ `    │      │      │      │      │      │      │      │      │
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Shift│ <    │ >    │ |    │ /    │ ~    │      │ =    │ ;    │ :    │ _    │ Enter│
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┴──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Ctrl │      │ Alt  │ GUI  │      │    Space    │ ▒▒▒▒ │      │ GUI  │ Ctrl │ Shift│
 * │      │      │      │      │      │             │ ▒▒▒▒ │      │      │      │      │
 * └──────┴──────┴──────┴──────┴──────┴─────────────┴──────┴──────┴──────┴──────┴──────┘
 */
[_LAYER_1] = LAYOUT_planck_grid(
    KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
    KC_ESC, KC_BSLS, RSFT(KC_2), RSFT(KC_PLUS), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_LSFT, KC_NUBS, RSFT(KC_NUBS), RALT(KC_NUBS), KC_PSLS, RALT(KC_RBRC), KC_NO, RSFT(KC_0), RSFT(KC_COMM), RSFT(KC_DOT), KC_QUES, KC_ENT,
    KC_LCTL, KC_NO, KC_LGUI, KC_LALT, KC_NO, KC_SPC, KC_SPC, KC_NO, KC_NO, KC_RALT, KC_RCTL, KC_RSFT
),

/* LAYER 2
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │ Tab  │ !    │ @    │ #    │ $    │ %    │ &    │ ?    │ /    │ \    │ ^    │Bckspc│
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Esc  │ (    │ )    │ {    │ }    │ [    │ ]    │      │      │      │      │      │
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Shift│ +    │ -    │ *    │ /    │ ~    │      │ =    │ ;    │ :    │ _    │ Enter│
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┴──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Ctrl │      │ Alt  │ GUI  │      │    Space    │      │ ▒▒▒▒ │ GUI  │ Ctrl │ Shift│
 * │      │      │      │      │      │             │      │ ▒▒▒▒ │      │      │      │
 * └──────┴──────┴──────┴──────┴──────┴─────────────┴──────┴──────┴──────┴──────┴──────┘
 */
[_LAYER_2] = LAYOUT_planck_grid(
    KC_TAB, KC_EXLM, RALT(KC_2), KC_HASH, RALT(KC_4), KC_PERC, KC_CIRC, KC_UNDS, KC_AMPR, RALT(KC_MINS), RSFT(KC_RBRC), KC_BSPC,
    KC_ESC, RSFT(KC_8), RSFT(KC_9), RALT(KC_7), RALT(KC_0), RALT(KC_8), RALT(KC_9), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_LSFT, KC_PPLS, KC_PMNS, KC_PAST, KC_PSLS, RALT(KC_RBRC), KC_NO, RSFT(KC_0), RSFT(KC_COMM), RSFT(KC_DOT), KC_QUES, KC_ENT,
    KC_LCTL, KC_NO, KC_LGUI, KC_LALT, KC_NO, KC_SPC, KC_SPC, KC_NO, KC_NO, KC_RALT, KC_RCTL, KC_RSFT
),

/* LAYER 3
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │ Tab  │      │      │ £    │      │      │      │      │      │      │      │Bckspc│
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Esc  │      │      │ €    │      │      │ Left │ Down │ Up   │ Right│      │      │
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Shift│      │      │      │ /    │ ~    │      │ =    │ ;    │ :    │ _    │ Enter│
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┴──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Ctrl │      │ Alt  │ GUI  │ ▒▒▒▒ │    Space    │      │      │ GUI  │ Ctrl │ Shift│
 * │      │      │      │      │ ▒▒▒▒ │             │      │      │      │      │      │
 * └──────┴──────┴──────┴──────┴──────┴─────────────┴──────┴──────┴──────┴──────┴──────┘
 */
[_LAYER_3] = LAYOUT_planck_grid(
    KC_TAB, KC_NO, KC_NO, RALT(KC_3), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RSFT(KC_0), KC_NO, KC_BSPC,
    KC_ESC, KC_NO, KC_NO, RALT(KC_E), KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,
    KC_LSFT, KC_NO, KC_NO, KC_NO, KC_PSLS, RALT(KC_RBRC), KC_NO, RSFT(KC_0), RSFT(KC_COMM), RSFT(KC_DOT), KC_QUES, KC_ENT,
    KC_LCTL, KC_NO, KC_LGUI, KC_LALT, KC_NO, KC_SPC, KC_SPC, KC_NO, KC_NO, KC_RALT, KC_RCTL, KC_RSFT
),

/* LAYER 4
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │ F1   │ F2   │ F3   │ F4   │ F5   │ F6   │ F7   │ F8   │ F9   │ F10  │ F11  │ F12  │
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Mute │ RGB  │ RGB  │ RGB  │      │      │ Mute │ Vol -│ Vol +│ Bri -│ Bri +│      │
 * │      │ Togg │ Mod -│ Mod 0│      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Shift│ RGB  │ RGB  │ RGB  │ RGB  │ RGB  │ RGB  │ RGB  │ RGB  │      │      │ Enter│
 * │      │ Hue -│ Hue +│ Sat -│ Sat +│ Bri -│ Bri +│ Eff -│ Eff +│      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┴──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Ctrl │ ▒▒▒▒ │ Alt  │ GUI  │      │    Space    │      │      │ GUI  │ Ctrl │ Shift│
 * │      │ ▒▒▒▒ │      │      │      │             │      │      │      │      │      │
 * └──────┴──────┴──────┴──────┴──────┴─────────────┴──────┴──────┴──────┴──────┴──────┘
 */
[_LAYER_4] = LAYOUT_planck_grid(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
    KC_TAB, RGB_TOG, RGB_RMOD, RGB_MOD, KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_NO,
    KC_LSFT, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, RGB_SPD, RGB_SPI, KC_NO, KC_NO, KC_ENT,
    KC_LCTL, KC_NO, KC_LGUI, KC_LALT, KC_NO, KC_SPC, KC_SPC, KC_NO, KC_NO, KC_RALT, KC_RCTL, KC_RSFT
)

};
