#ifdef RGB_MATRIX_ENABLE
    const is31_led PROGMEM g_is31_leds[DRIVER_LED_TOTAL] = {
        {0, C9_1,  C3_1,  C5_1},
        {0, C9_2,  C3_2,  C5_2}, 
        {0, C9_3,  C2_1,  C5_3},
        {0, C9_4,  C2_2,  C5_4},
        {0, C8_1,  C6_1,  C7_1}, 
        {0, C8_2,  C6_2,  C7_2}, 
        {0, C8_3,  C6_3,  C7_3}, 
        {0, C8_4,  C6_4,  C7_4},
        {0, C9_9,  C3_9,  C5_9}, 
        {0, C9_10, C3_10, C5_10}, 
        {0, C9_11, C2_9,  C5_11}, 
        {0, C9_12, C2_10, C5_12},
        {0, C8_9,  C6_9,  C7_9}, 
        {0, C8_10, C6_10, C7_10},
        {0, C8_11, C6_11, C7_11},
        {0, C8_12, C6_12, C7_12}, 
        };

        led_config_t g_led_config = {
            {
                {0,  1,  2,   3},
                {4,  5,  6,   7},
                {8,  9,  10,  11},
                {12, 13, 14,  15}
            },{ 
                { 0, 0 }, { 56, 0  }, { 112, 0  },{ 224, 0  },
                { 0, 16 },{ 56, 16 }, { 112, 16 },{ 224, 16 },
                { 0, 32 },{ 56, 32 }, { 112, 32 },{ 224, 32 },
                { 0, 64 },{ 56, 64 }, { 112, 64 },{ 224, 64 }

            },{
                4,4,4,4,
                4,4,4,4,
                4,4,4,4,
                4,4,4,4,
                }
        };
#endif

#ifdef CONSOLE_ENABLE
    void keyboard_post_init_user(void) {
        debug_enable   = true;
        debug_matrix   = true;
        debug_keyboard = true;
    }
#endif 
