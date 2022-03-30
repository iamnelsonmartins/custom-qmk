#pragma once

// TODO: including this causes "error: expected identifier before '(' token" errors
//#include "config_common.h"

#define PRODUCT Macro Teensy LC
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xAAAA
#define DEVICE_VER      0x0001

#define MATRIX_COLS 2
#define MATRIX_ROWS 2
#define MATRIX_COL_PINS { C0, B0 }
#define MATRIX_ROW_PINS { B2, B3 }
#define DIODE_DIRECTION COL2ROW
//#define UNUSED_PINS

// i2c_master defines
#define I2C1_SCL_PIN B0 // A2 on pinout = B0
#define I2C1_SDA_PIN B1 // A3 on pinout = B1
#define I2C1_SCL_PAL_MODE PAL_MODE_ALTERNATIVE_2
#define I2C1_SDA_PAL_MODE PAL_MODE_ALTERNATIVE_2
