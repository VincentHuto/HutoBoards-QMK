#pragma once

#include "config_common.h"

#define DEBOUNCE 5
#define ENCODERS_PAD_A { GP3}
#define ENCODERS_PAD_B { GP4}
#define ENCODER_RESOLUTION 4
#define ENCODER_DIRECTION_FLIP
#define TAP_CODE_DELAY 10

#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE

#ifdef OLED_ENABLE
#define I2C1_SCL_PIN        GP27
#define I2C1_SDA_PIN        GP26
#define I2C_DRIVER I2CD2
#endif

/* #define EE_HANDS  */
/* #define MASTER_LEFT */
/* #define MASTER_RIGHT */

/* Top left key on left half */
#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0
/* Top right key on right half */
#define BOOTMAGIC_LITE_ROW_RIGHT    0
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

