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
     * │ 0 │ 3 │ 6 │ 9 │
     * ├───┼───┼───┼───│
     * │ 1 │ 4 │ 7 │ A │
     * ├───┼───┼───┼───┤
     * │ 2 │ 5 │ 8 │ B │
     * ├───┼───┼───┼───│
     * │ x │ x │ x │ x │
     * └───┴───┴───┴───┘
     */

    [_BASE] = LAYOUT(
        KC_0,  KC_3,  KC_6,  KC_9,
        KC_1,  KC_4,  KC_7,  KC_A,
        KC_2,  KC_5,  KC_8,  KC_B,
        TO(0), TO(1), TO(2), TO(3)
    ),
    [_FN] = LAYOUT(
        KC_1,      KC_1,      KC_1,      KC_1,
        KC_1,      KC_1,      KC_1,      KC_1,
        KC_1,      KC_1,      KC_1,      KC_1,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [_FN1] = LAYOUT(
        KC_2,      KC_2,      KC_2,      KC_2,
        KC_2,      KC_2,      KC_2,      KC_2,
        KC_2,      KC_2,      KC_2,      KC_2,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [_FN2] = LAYOUT(
        KC_3,      KC_3,      KC_3,      KC_3,
        KC_3,      KC_3,      KC_3,      KC_3,
        KC_3,      KC_3,      KC_3,      KC_3,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
};

#ifdef RGB_MATRIX_ENABLE
    const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
        /* Refer to IS31 manual for these locations
        *   driver
        *   |  R location
        *   |  |      G location
        *   |  |      |      B location
        *   |  |      |      | */

            //TODO
                //ADD ALL POSSIBLE COMBINATIONS
                // NON WORKING COMMON ANODE
            // {0, C1_1, C3_2, C4_2}
            // {0, C1_2, C2_2, C4_3}
            // {0, C1_3, C2_3, C3_3}
            // {0, C1_4, C2_4, C3_4}
            // {0, C1_5, C2_5, C3_5}
            // {0, C1_6, C2_6, C3_6}
            // {0, C1_7, C2_7, C3_7}
            // {0, C1_8, C2_8, C3_8}
            // {0, C1_9, C3_10, C4_10},
            // {0, C1_10, C2_10, C4_11},
            // {0, C1_11, C2_11, C3_11},
            // {0, C1_12, C2_12, C3_12},
            // {0, C1_13, C2_13, C3_13},
            // {0, C1_14, C2_14, C3_14},
            // {0, C1_15, C2_15, C3_15},
            // {0, C1_16, C2_16, C3_16},
            // {0, C9_5,  C8_5,  C7_5},
            // {0, C9_6,  C8_6,  C7_6},
            // {0, C9_7,  C8_7,  C6_6},
            // {0, C9_8,  C7_7,  C6_7},
            // {0, C9_13, C8_13, C7_13},
            // {0, C9_14, C8_14, C7_14},
            // {0, C9_15, C8_15, C6_14},
            // {0, C9_16, C7_15, C6_15},

            //ROW 1
                //TODO

            //ROW 2 - MATRIX B
            // {0, C9_9,  C8_9,  C7_9}, 
            // {0, C9_10, C8_10, C7_10},
            // {0, C9_11, C8_11, C7_11},
            // {0, C9_12, C8_12, C7_12},

            //R0W 3
                //TODO

            //ROW 4 - MATRIX A
            // {0, C9_1,  C8_1,  C7_1},
            // {0, C9_2,  C8_2,  C7_2},
            // {0, C9_3,  C8_3,  C7_3},
            // {0, C9_4,  C8_4,  C7_4},
        };
    
    led_config_t g_led_config = {
        {
            {3}
            // {3, 7, 11, 15},
            // {2, 6, 10, 14},
            // {1, 5, 9,  13},
            // {0, 4, 8,  12}
        },{
            {0,64}
            // { 0,64 },{ 56,64 },{ 112,64 },{ 224,64 },
            // { 0,32 },{ 56,32 },{ 112,32 },{ 224,32 },
            // { 0,16 },{ 56,16 },{ 112,16 },{ 224,16 },
            // { 0,0  },{ 56,0  },{ 112,0  },{ 224,0  },
        },{
            4
            // 4,4,4,4,
            // 4,4,4,4,
            // 4,4,4,4,
            // 4,4,4,4
        }
    };
#endif


// #### DEFINE COLOR PER LAYER
// #### _BASE = RED
// #### _FN = BLUE
// #### _FN1 = GREEN
// #### _FN2 = YELLOW
// void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//     for (uint8_t i = led_min; i <= led_max; i++) {
//         switch(get_highest_layer(layer_state|default_layer_state)) {
//             case _BASE:
//                 rgb_matrix_set_color(i, RGB_RED);
//                 break;
//             case _FN:
//                 rgb_matrix_set_color(i, RGB_BLUE);
//                 break;
//             case _FN1:
//                 rgb_matrix_set_color(i, RGB_PURPLE);
//                 break;
//             case _FN2:
//                 rgb_matrix_set_color(i, RGB_GREEN);
//                 break;
//         }
//     }
// }