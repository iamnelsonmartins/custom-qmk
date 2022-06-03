#pragma once

#define DEBUG_MATRIX_SCAN_RATE

// 0b1110100 AD <-> GND
// 0b1110111 AD <-> VCC
// 0b1110101 AD <-> SCL
// 0b1110110 AD <-> SDA

#ifdef RGB_MATRIX_ENABLE
    #define I2C_DRIVER          I2CD1
    #define I2C1_SDA_PIN        GP4
    #define I2C1_SCL_PIN        GP5

    #define DRIVER_ADDR_1       0b1110100
    #define DRIVER_COUNT        1
    #define DRIVER_1_LED_TOTAL  16
    #define DRIVER_LED_TOTAL    (DRIVER_1_LED_TOTAL)
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#endif

