#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_HOME,                                        KC_END,         KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_PGUP,                                        KC_PGDOWN,      KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    KC_BSPACE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    TO(3),          TO(1),          KC_LGUI,        KC_APPLICATION, LGUI(KC_SPACE),                                                                                                 KC_MINUS,       KC_EQUAL,       TT(1),          KC_LBRACKET,    KC_RBRACKET,
                                                                                                    KC_LALT,        KC_LCTRL,       KC_RALT,        KC_RCTRL,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_SPACE,       LT(2,KC_BSPACE),KC_TRANSPARENT, KC_TRANSPARENT, KC_CAPSLOCK,    KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_PSCREEN,                                     KC_INSERT,      KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_DELETE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_SLASH,    KC_F11,
    KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_4,           KC_KP_5,        KC_6,           KC_KP_ASTERISK, KC_F12,
    KC_TRANSPARENT, KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_3,           KC_KP_MINUS,    KC_EQUAL,
    TO(0),          TO(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_KP_0,        KC_KP_DOT,      TO(0),          KC_KP_PLUS,     KC_RCTRL,
                                                                                                    KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_CALCULATOR,  KC_SCROLLLOCK,
                                                                                                                    KC_AUDIO_MUTE,  KC_TRANSPARENT,
                                                                                    LGUI(KC_L),     KC_SYSTEM_SLEEP,KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, KC_ENTER,       KC_PAUSE
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN4,     KC_MS_BTN3,     KC_MS_BTN5,     KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_MS_WH_UP,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_DOWN,  KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT,
    TO(1),          TO(3),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F,           KC_I,           KC_R,           KC_M,           KC_TRANSPARENT, RESET,                                          RESET,          KC_F,           KC_I,           KC_R,           KC_W,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_W,           KC_A,           KC_R,           KC_E,           KC_TRANSPARENT, EEP_RST,                                        EEP_RST,        KC_W,           KC_A,           KC_R,           KC_E,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MAGIC_TOGGLE_NKRO,                                MAGIC_TOGGLE_NKRO,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    TO(2),          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
