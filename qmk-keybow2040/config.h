#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0050
#define PRODUCT_ID      0x07F8
#define DEVICE_VER      0x0001
#define MANUFACTURER    Pimoroni
#define PRODUCT         keybow2040

#define I2C_DRIVER      I2CD2
#define I2C1_SDA_PIN    GP4
#define I2C1_SCL_PIN    GP5

// Macropad uses Direct Pins
#define DIRECT_PINS {{ GP18, GP14, GP10, GP6 },{ GP19, GP15, GP11, GP7 },{ GP20, GP16, GP12, GP8 },{ GP21, GP17, GP13, GP9 }}

#ifdef RGB_MATRIX_ENABLE
    #define DRIVER_COUNT 1
    #define DRIVER_LED_TOTAL 16
    #define DRIVER_ADDR_1 0b1110100
#endif

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U // Timeout window in ms in which the double tap can occur.

