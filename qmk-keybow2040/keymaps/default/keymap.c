#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* LAYOUT 0
     * ┌─────┬───┬───┬───┐
     * │  0  │ 1 │ 2 │ 3 │
     * ├─────┼───┼───┼───┤
     * │  4  │ 5 │ 6 │ 7 │
     * ├─────┼───┼───┼───┤
     * │  8  │ 9 │ A │ B │
     * ├─────┼───┼───┼───┤
     * │ L1  │ C │ D │ E │
     * └─────┴───┴───┴───┘
     */

    /* LAYOUT 1
     * ┌───┬───┬───┬────┐
     * │ _ │ _ │ _ │ _  │
     * ├───┼───┼───┼────┤
     * │ _ │ _ │ _ │ _  │
     * ├───┼───┼───┼────┤
     * │   │ _ │ _ │ _  │
     * ├───┼───┼───┼────┤
     * │ _ │ _ │ _ │ L2 │
     * └───┴───┴───┴────┘
     */

    /* LAYOUT 2
     * ┌───┬───┬───┬───────┐
     * │ _ │ _ │ _ │ reset │
     * ├───┼───┼───┼───────┤
     * │ _ │ _ │ _ │   _   │
     * ├───┼───┼───┼───────┤
     * │ _ │ _ │ _ │   _   │
     * ├───┼───┼───┼───────┤
     * │ _ │ _ │ _ │   _   │
     * └───┴───┴───┴───────┘
     */
    [0] = LAYOUT(
        KC_0, KC_1, KC_2, KC_3,
        KC_4, KC_5, KC_6, KC_7,
        KC_8, KC_9, KC_A, KC_B,
        MO(1), KC_E, KC_F, KC_G
    ),

    [1] = LAYOUT(
        KC_NO,   KC_NO, KC_NO, KC_NO,
        KC_NO,   KC_NO, KC_NO, KC_NO,
        KC_NO,   KC_NO, KC_NO, KC_NO,
        KC_TRNS, KC_NO, KC_NO, MO(2)
    ),

    [2] = LAYOUT(
        KC_NO,   KC_NO, KC_NO, QK_BOOT,
        KC_NO,   KC_NO, KC_NO, KC_NO,
        KC_NO,   KC_NO, KC_NO, KC_NO,
        KC_TRNS, KC_NO, KC_NO, KC_TRNS
    )
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    #ifdef CONSOLE_ENABLE
        uprintf("row: %u, col: %u, pressed: %u\n", record->event.key.row, record->event.key.col, record->event.pressed);
    #endif 
return true;
}