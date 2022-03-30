# MCU name
MCU 					= RP2040
BOOTLOADER      		= rp2040
NKRO_ENABLE 			= yes           # Enable N-Key Rollover
ALLOW_WARNINGS 			= yes
RGB_MATRIX_ENABLE  		= yes
RGB_MATRIX_DRIVER 		= IS31FL3731

PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS!

CONSOLE_ENABLE 			= no # Change to no if need to use qmk console