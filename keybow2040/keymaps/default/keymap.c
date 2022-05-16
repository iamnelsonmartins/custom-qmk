#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN,
    _FN1,
    _FN2

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 0 │ 4 │ 8 │ C │
     * ├───┼───┼───┼───│
     * │ 1 │ 5 │ 9 │ D │
     * ├───┼───┼───┼───┤
     * │ 2 │ 6 │ A │ E │
     * ├───┼───┼───┼───│
     * │ 3 │ 7 │ B │ F │
     * └───┴───┴───┴───┘
     */
    [_BASE] = LAYOUT(
        KC_0,  KC_4,  KC_8,  KC_C,
        KC_1,  KC_5,  KC_9,  KC_D,
        KC_2,  KC_6,  KC_A,  KC_E,
        TO(0), TO(1),  TO(2),  TO(3)
    ),
    [_FN] = LAYOUT(
        RGB_TOG, RGB_HUI, RGB_SAI, KC_NO,
        RGB_MOD, RGB_HUD, RGB_SAD, KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [_FN1] = LAYOUT(
        RGB_TOG, RGB_HUI, RGB_SAI, KC_NO,
        RGB_MOD, RGB_HUD, RGB_SAD, KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [_FN2] = LAYOUT(
        RGB_TOG, RGB_HUI, RGB_SAI, KC_NO,
        RGB_MOD, RGB_HUD, RGB_SAD, KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
};

#ifdef RGB_MATRIX_ENABLE
    const is31_led PROGMEM g_is31_leds[DRIVER_LED_TOTAL] = {
        /* Refer to IS31 manual for these locations
        *   driver
        *   |  R location
        *   |  |      G location
        *   |  |      |      B location
        *   |  |      |      | */

        // WORKING 2 COLUMNS - common cathode
        {0, C9_1, C8_1, C7_1},
        // {0, C9_2, C8_2, C7_2},
        // {0, C9_3, C8_3, C7_3},
        // {0, C9_4, C8_4, C7_4},

        // {0, C9_9,  C8_9,  C7_9}, 
        // {0, C9_10, C8_10, C7_10},
        // {0, C9_11, C8_11, C7_11},
        // {0, C9_12, C8_12, C7_12},

        // {0, C1_1, C3_2, C4_2}, 
        // {0, C1_2, C2_2, C4_3}, 
        // {0, C1_3, C2_3, C3_3}, 
        // {0, C1_4, C2_4, C3_4}, 
        // {0, C1_5, C2_5, C3_5},
        // {0, C1_6, C2_6, C3_6},
        // {0, C1_7, C2_7, C3_7},
        // {0, C1_8, C2_8, C3_8},
        // {0, C9_5, C8_5, C7_5},
        // {0, C9_6, C8_6, C7_6},
        // {0, C9_7, C8_7, C6_6},
        // {0, C9_8, C7_8, C6_7},
        // {0, C1_10, C2_10, C4_11},
        // {0, C1_11, C2_11, C3_11},
        // {0, C1_12, C2_12, C3_12},
        // {0, C1_13, C2_13, C3_13},
        // {0, C1_14, C2_14, C3_14},
        // {0, C1_15, C2_15, C3_15},
        // {0, C1_16, C2_16, C3_16},
        // {0, C9_13, C8_13, C7_13},
        // {0, C9_14, C8_14, C7_14},
        // {0, C9_15, C8_15, C6_15},
        // {0, C9_16, C7_15, C6_14},
    

        };

    #define P(x,y) {(x*224 / (4 - 1)), (y*64 / (4 - 1))} //easy led mapping function
    led_config_t g_led_config = { 
        {
            {0}
            // {0, 4, 8,  12},
            // {1, 5, 9,  13},
            // {2, 6, 10, 14},
            // {3, 7, 11, 15}
        },{
            P(0,0)
            // P(0,0), P(1,0), P(2,0), P(3,0),
            // P(0,1), P(1,1), P(2,1), P(3,1),
            // P(0,2), P(1,2), P(2,2), P(3,2),
            // P(0,3), P(1,3), P(2,3), P(3,3)

            // { 0,0  },{ 56, 0 }, { 112, 0  },{ 224, 0  },
            // { 0,16 },{ 56, 16}, { 112, 16 },{ 224, 16 },
            // { 0,32 },{ 56, 32}, { 112, 32 },{ 224, 32 },
            // { 0,64 },{ 56, 64}, { 112, 64 },{ 224, 64 }
        },{
            4
            // 4,4,4,4,
            // 4,4,4,4,
            // 4,4,4,4,
            // 4,4,4,4,
        }
        };
        #undef P
#endif


// DEFINE COLOR PER LAYER
// _BASE = RED
// _FN = BLUE
// _FN1 = GREEN
// _FN2 = YELLOW
void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    for (uint8_t i = led_min; i <= led_max; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case _BASE:
                rgb_matrix_set_color(i, RGB_RED);
                break;
            case _FN:
                rgb_matrix_set_color(i, RGB_BLUE);
                break;
            case _FN1:
                rgb_matrix_set_color(i, RGB_TEAL);
                break;
            case _FN2:
                rgb_matrix_set_color(i, RGB_WHITE);
                break;
            default:
                break;
        }
    }
}