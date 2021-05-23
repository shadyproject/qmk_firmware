#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum custom_keycodes {
                      QWERTY = SAFE_RANGE,
                      LOWER,
                      RAISE,
                      ADJUST
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = LAYOUT(
               //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
                  KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
               //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                  KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
               //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
            CTL_T(KC_CAPS),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
               //├────────┼────────┼────────┼────────┼────────┼────────┤────────┐        ┌────────├────────┼────────┼────────┼────────┼────────┼────────┤
                  KC_GRV,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     LOWER,            RAISE,    KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH, KC_MINS,
               //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                                 KC_LSFT, KC_LGUI, KC_BSPC,                    KC_ENT, KC_SPC,  KC_RALT
                                             // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
               ),

	[_LOWER] = LAYOUT(
               //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
                   KC_TILD, KC_NO,   KC_NO,    KC_NO,   KC_NO,  KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_PGUP,
               //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                   RESET,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_PGDN,
               //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                   KC_DEL, KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_LCBR,                            KC_RCBR, KC_NO,   KC_NO,   KC_NO,   KC_PPLS, KC_HOME,
               //├────────┼────────┼────────┼────────┼────────┼────────┤────────┐        ┌────────├────────┼────────┼────────┼────────┼────────┼────────┤
                   BL_INC,  BL_DEC,  BL_BRTG, KC_NO,   KC_NO,   KC_LBRC, KC_TRNS,          KC_TRNS, KC_RBRC, KC_NO,   KC_NO,   KC_NO,   KC_PMNS, KC_END,
               //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                                   KC_NO, KC_TRNS,  KC_DEL,                    KC_DEL,  TT(3),   KC_NO
                                             // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
               ),

	[_RAISE] = LAYOUT(
               //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
                   KC_F12, KC_F1,    KC_F2,    KC_F3,  KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
               //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                   KC_NO,   KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_NO,
               //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                   KC_NO,   KC_MRWD, KC_MFFD, KC_VOLU, KC_PGUP, KC_UNDS,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_NO,
               //├────────┼────────┼────────┼────────┼────────┼────────┤────────┐        ┌────────├────────┼────────┼────────┼────────┼────────┼────────┤
                  KC_MUTE, KC_MSTP, KC_MPLY, KC_VOLD, KC_PGDN, KC_PMNS,  KC_NO,            KC_NO,   KC_PPLS, KC_PEQL, KC_NO,   KC_NO,   KC_NO,   KC_NO,
               //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                                  KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_TRNS,  KC_NO
                                             // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
               ),

	[_ADJUST] = LAYOUT(
               //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
                   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,    KC_NO,   KC_NO,  KC_NO,   KC_NO,
               //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,
               //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
                   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,
               //├────────┼────────┼────────┼────────┼────────┼────────┤────────┐        ┌────────├────────┼────────┼────────┼────────┼────────┼────────┤
                   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,
               //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                                   KC_NO,  KC_NO,   KC_NO,                      KC_NO,  KC_TRNS, KC_NO
                                             // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
               )
};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
}
