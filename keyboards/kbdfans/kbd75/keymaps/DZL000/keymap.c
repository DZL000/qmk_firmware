#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_DEL,   KC_INS,
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_NO ,   KC_BSLS,  KC_PGUP,
    LT(4,KC_TAB) ,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,  LT(4,KC_LBRC), KC_RBRC ,  KC_BSPC,            KC_PGDN,
    MO(3),    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,                      KC_ENT,   KC_HOME,
    KC_LSFT,  KC_NO,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,            KC_UP,    KC_END,
    KC_LCPO,  KC_LGUI,  KC_LALT,                      MO(1),   KC_SPC,   MO(2),                       KC_RALT,    KC_NO,  KC_RCPC,  KC_LEFT,  KC_DOWN,  KC_RGHT
  ),


  [1] = LAYOUT(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_NO,  KC_DEL,  _______,  
    KC_NO,  KC_ESC ,  C(KC_PGUP),  C(KC_T),  C(KC_PGDN),  LCA(KC_UP),  KC_PGUP,  KC_HOME,  KC_UP  ,  KC_END ,  KC_DEL ,  KC_PSCR,  _______,  _______,            _______,
    _______,  KC_CAPS,  LCA(KC_LEFT), KC_TAB,  LCA(KC_RGHT),  LCA(KC_DOWN),  KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_INS, _______,                      _______,  _______,
    KC_LSFT,  KC_NO,  C(KC_F8),  C(S(KC_PGUP)),  C(KC_W),  C(S(KC_PGDN)),  KC_RCTL,  KC_APP,  LCA(KC_T),C(KC_A),  _______,  _______,  _______,            _______,  _______,
    _______,  _______,  _______,                      LT(1,KC_SPC),  KC_LCTL,  KC_RALT,                      _______,  _______,  _______,  _______,  _______,  _______
  ),

  [2] = LAYOUT(
    KC_PWR  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  RGB_SPI  ,  RGB_SPD  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  RESET  ,
    RGB_MOD  ,  RGB_RMOD  ,  RGB_HUI  ,  RGB_HUD  ,  RGB_SAI  ,  RGB_SAD  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,
    RGB_VAI  ,  RGB_VAD  ,  KC_MUTE  ,  KC_VOLU  ,  KC_MPLY  ,  KC_NO  ,  G(KC_PGUP)  ,  G(KC_SCLN)  ,  G(KC_UP)  ,  G(KC_QUOT)  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,            KC_NO  ,
    RGB_M_P  ,  RGB_TOG  ,  KC_MPRV  ,  KC_VOLD  ,  KC_MNXT  ,  KC_NO  ,  G(KC_PGDN)  ,  G(KC_LEFT)  ,  G(KC_DOWN)  ,  G(KC_RGHT)  ,  KC_NO  ,  KC_NO  ,                      KC_NO  ,  KC_NO  ,
    RGB_M_B  ,  KC_NO  ,  RGB_M_R  ,  RGB_M_SW  ,  RGB_M_SN  ,  RGB_M_K  ,  RGB_M_X  ,  RGB_M_G  ,  G(KC_DOT)  ,  KC_NO  ,  G(KC_SLSH)  ,  KC_NO  ,  KC_NO  ,            KC_NO  ,  KC_NO  ,
    KC_SLEP  ,  KC_NO  ,  KC_NO  ,                      KC_NO  ,  KC_NO  ,  LT(2,KC_SPC)  ,                      KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_WAKE  
  ),

  [3] = LAYOUT(
    KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,
    KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,
    KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_WH_U  ,  KC_WH_L  ,  KC_MS_U  ,  KC_WH_R  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,            KC_NO  ,
    LT(3,KC_CAPS)  ,  KC_NO  ,  KC_ACL0  ,  KC_ACL1  ,  KC_ACL2  ,  KC_NO  ,  KC_WH_D  ,  KC_MS_L  ,  KC_MS_D  ,  KC_MS_R  ,  KC_NO  ,  KC_NO  ,                      KC_NO  ,  KC_NO  ,
    KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,            KC_NO  ,  KC_NO  ,
    KC_NO  ,  KC_NO  ,  KC_NO  ,                      KC_BTN2  ,  KC_BTN1  ,  KC_BTN3  ,                      KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  
  ),

  [4] = LAYOUT(
    KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,
    KC_TAB  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,
    KC_NO  ,  KC_AT  ,  KC_PERC  ,  KC_PAST  ,  KC_PSLS  ,  KC_DLR  ,  KC_PAST  ,  KC_P7  ,  KC_P8  ,  KC_P9  ,  KC_PPLS  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,            KC_NO  ,
    KC_UNDS  ,  KC_PIPE  ,  KC_AMPR  ,  KC_EXLM  ,  KC_QUES  ,  KC_CIRC  ,  KC_PSLS  ,  KC_P4  ,  KC_P5  ,  KC_P6  ,  KC_PMNS  ,  KC_NO  ,                      KC_NO  ,  KC_NO  ,
    KC_LCBR  ,  KC_NO  ,  KC_RCBR  ,  KC_PPLS  ,  KC_MINS  , KC_HASH  ,  KC_TILD  ,  KC_NLCK  ,  KC_P1  ,  KC_P2  ,  KC_P3  ,  KC_PENT  ,  KC_NO  ,            KC_NO  ,  KC_NO  ,
    KC_LBRC  ,  KC_RBRC  ,   KC_GRV ,                      KC_PEQL  ,  KC_P0  ,  KC_PDOT  ,                      KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  
  ),
};

// qmk compile -kb kbdfans/kbd75/rev2 -km DZL000 ; qmk flash -kb kbdfans/kbd75/rev2 -km DZL000