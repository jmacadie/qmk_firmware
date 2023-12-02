#include QMK_KEYBOARD_H

enum ferris_layers {
    _COLMAK_DH,
    _NAVIGATION,
    _MOUSE,
    _RIGHT_SYM,
    _LEFT_SYM,
    _NUMBERS,
    _FUNCTION,
    _EXTRA
};

// Base layer
// Modifier keys
#define KC_CS_Q  C_S_T(KC_Q)
#define KC_CS_HY C_S_T(KC_MINS)
#define KC_S_A   LSFT_T(KC_A)
#define KC_S_O   LSFT_T(KC_O)
#define KC_C_X   LCTL_T(KC_X)
#define KC_A_C   LALT_T(KC_C)
#define KC_A_COM LALT_T(KC_COMM)
#define KC_C_DOT LCTL_T(KC_DOT)
// Layer keys
#define KC_L5_R  LT(_NUMBERS,    KC_R)
#define KC_L1_S  LT(_NAVIGATION, KC_S)
#define KC_L3_T  LT(_RIGHT_SYM,  KC_T)
#define KC_L4_N  LT(_LEFT_SYM,   KC_N)
#define KC_L2_E  LT(_MOUSE,      KC_E)
#define KC_L6_I  LT(_FUNCTION,   KC_I)
#define KC_L7_SP LT(_EXTRA,      KC_SPC)
// Copy & Paste
#define KC_C_C LCTL(KC_C)
#define KC_C_V LCTL(KC_V)

// Navigation
#define KC_C_PUP LCTL(KC_PGUP)
#define KC_C_PDN LCTL(KC_PGDN)
#define KC_S_TAB LSFT(KC_TAB)
#define KC_OS_GU OSM(MOD_LGUI)
#define KC_OS_SG OSM(MOD_LGUI | MOD_LSFT)
#define KC_C_U LCTL(KC_U)
#define KC_C_D LCTL(KC_D)

// Symbols
#define KC_POUND LSFT(KC_3) // UK only!
#define KC_UKAT  LSFT(KC_QUOTE) // UK only!
#define KC_NUTDA LSFT(KC_NONUS_HASH) // ISO only!
#define KC_UKDQU LSFT(KC_2) // UK only!
#define KC_NUPIP LSFT(KC_NONUS_BACKSLASH) // ISO only!

// Extra
#define KC_C_N LCTL(KC_N)
#define KC_C_Y LCTL(KC_Y)
#define KC_C_P LCTL(KC_P)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLMAK_DH] = LAYOUT(
        KC_CS_Q,  KC_W,     KC_F,     KC_P,     KC_B,           KC_J,     KC_L,     KC_U,     KC_Y,     KC_CS_HY,
        KC_S_A,   KC_L5_R,  KC_L1_S,  KC_L3_T,  KC_G,           KC_M,     KC_L4_N,  KC_L2_E,  KC_L6_I,  KC_S_O,
        KC_Z,     KC_C_X,   KC_A_C,   KC_D,     KC_V,           KC_K,     KC_H,     KC_A_COM, KC_C_DOT, KC_UNDS,
                                      KC_C_C,   KC_BSPC,        KC_L7_SP, KC_C_V
    ),

    [_NAVIGATION] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,        KC_C_U,   KC_C_PUP, KC_PGUP,  KC_C_PDN, _______,
        _______,  _______,  KC_NO,    _______,  KC_LALT,        KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_TAB,
        _______,  _______,  _______,  _______,  _______,        KC_C_D,   KC_HOME,  KC_PGDN,  KC_END,   KC_S_TAB,
                                      KC_OS_SG, _______,        _______,  KC_OS_GU
    ),

    [_MOUSE] = LAYOUT(
        _______,  _______,  KC_WH_U,  _______,  _______,        _______,  _______,  _______,  _______,  _______,
        KC_MS_L,  KC_MS_D,  KC_MS_U,  KC_MS_R,  _______,        _______,  KC_BTN1,  KC_NO,    KC_BTN2,  _______,
        _______,  KC_WH_L,  KC_WH_D,  KC_WH_R,  _______,        _______,  _______,  _______,  _______,  _______,
                                      _______,  _______,        _______,  _______
    ),

    [_RIGHT_SYM] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,        KC_ASTR,  KC_EQUAL, KC_PLUS,  KC_MINUS, KC_POUND,
        KC_CIRC,  KC_ASTR,  KC_AMPR,  KC_NO,    _______,        KC_QUES,  KC_EXLM,  KC_SCLN,  KC_COLN,  KC_DLR,
        _______,  _______,  _______,  _______,  _______,        KC_AMPR,  KC_UKAT,  KC_NUHS,  KC_NUTDA, KC_PERC,
                                      KC_VOLD,  _______,        _______,  KC_VOLU
    ),

    [_LEFT_SYM] = LAYOUT(
        KC_CIRC,  KC_NUPIP, KC_LT,    KC_GT,    KC_UKDQU,       _______,  _______,  _______,  _______,  _______,
        KC_LCBR,  KC_RCBR,  KC_LPRN,  KC_RPRN,  KC_QUOTE,       _______,  KC_NO,    _______,  _______,  _______,
        KC_NUBS,  KC_SLASH, KC_LBRC,  KC_RBRC,  KC_GRAVE,       _______,  _______,  _______,  _______,  _______,
                                      KC_VOLD,  _______,        _______,  KC_VOLU
    ),

    [_NUMBERS] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,        KC_ASTR,  KC_7,     KC_8,     KC_9,     KC_PLUS,
        _______,  KC_NO,    _______,  _______,  _______,        KC_DOT,   KC_0,     KC_1,     KC_2,     KC_3,
        _______,  _______,  _______,  _______,  _______,        KC_SLASH, KC_4,     KC_5,     KC_6,     KC_MINUS,
                                      _______,  _______,        _______,  KC_EQUAL
    ),

    [_FUNCTION] = LAYOUT(
        KC_F4,    KC_F3,    KC_F2,    KC_F1,    _______,        _______,  _______,  _______,  _______,  _______,
        KC_F8,    KC_F7,    KC_F6,    KC_F5,    _______,        _______,  _______,  _______,  KC_NO,    _______,
        KC_F12,   KC_F11,   KC_F10,   KC_F9,    _______,        _______,  _______,  _______,  _______,  _______,
                                      _______,  _______,        _______,  _______
    ),

    [_EXTRA] = LAYOUT(
        _______,  _______,  KC_COLN,  KC_ESC,   KC_C_N,         DF(2),    _______,  _______,  _______,  KC_PSCR,
        _______,  KC_PERC,  KC_SLSH,  KC_ENT,   KC_C_Y,         DF(1),    KC_LGUI,  _______,  _______,  CW_TOGG,
        _______,  _______,  _______,  KC_EXLM,  KC_C_P,         DF(0),    DF(5),    _______,  _______,  QK_BOOT,
                                      KC_TAB,   KC_DEL,         KC_NO,    _______
    )
};

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_MINS:
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}
