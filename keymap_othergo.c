#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(  ESC,   F1,    F2,   F3,   F4,  F5,  F6,   F7,  F8,   F9,  F10,  F11,  F12,        PAUS,\
             GRV,  GRV,     1,    2,    3,   4,   5,  ESC,   6,    7,    8,    9,    0,   EQL, MINS,\
            LBRC, RBRC,     Q,    W,    E,   R,   T,  DEL,   Y,    U,    I,    O,    P,  QUOT, SLSH,\
                  LSFT,     A,    S,    D,   F,   G,  TAB,   H,    J,    K,    L, SCLN,  RSFT,\
                  LCTL,     Z,    X,    C,   V,   B, BSPC,   N,    M, COMM,  DOT, SLSH,  RCTL,\
                  LALT,  HOME, PGUP, PGDN, END, SPC,  ENT, SPC, LEFT,   UP, DOWN, RIGHT, LALT)
};
const uint16_t PROGMEM fn_actions[] = {};

