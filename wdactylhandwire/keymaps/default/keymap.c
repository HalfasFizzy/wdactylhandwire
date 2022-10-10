#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = split_7x14(
                 KC_F5,    KC_F4,    KC_F3,    KC_F2,    KC_F1,    KC_GRAVE,       KC_RIGHT_BRACKET,    KC_LEFT_BRACKET,    KC_F9,    KC_F8,    KC_F7,    KC_F6,    
                 KC_5,    KC_4,    KC_3,    KC_2,    KC_1,    KC_ESCAPE,       KC_EQUAL,    KC_0,    KC_9,    KC_8,    KC_7,    KC_6,   
                 KC_T,    KC_R,    KC_E,    KC_W,    KC_Q,    KC_TAB,          KC_MINUS,    KC_P,    KC_O,    KC_I,    KC_U,    KC_Y,    
                 KC_G,    KC_F,    KC_D,    KC_S,    KC_A,    KC_CAPS_LOCK,    KC_QUOTE,    KC_SEMICOLON,    KC_L,    KC_K,    KC_J,    KC_H,    
                 KC_0,    KC_V,    KC_C,    KC_X,    KC_Z,    KC_0,                KC_0,    KC_SLASH,    KC_DOT,    KC_COMMA,    KC_M,    KC_N,
        KC_ENTER,    KC_BACKSPACE,    KC_LEFT_SHIFT,    KC_0,    KC_0,                           KC_RIGHT_CTRL,    KC_RIGHT_ALT,    KC_SPACE,    KC_RIGHT_SHIFT,    KC_PAGE_UP,
        KC_AUDIO_VOL_DOWN,    KC_AUDIO_VOL_UP,                                                                              KC_RGUI,    KC_PAGE_DOWN,
    )    
};
