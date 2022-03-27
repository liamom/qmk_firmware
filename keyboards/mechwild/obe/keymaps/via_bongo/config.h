#pragma once

#include "../../config.h"

#ifdef OLED_ENABLE
    /* Mapping I2C2 for OLED */
    #define I2C1_SCL_PIN B6
    #define I2C1_SDA_PIN B7
    // #define I2C_DRIVER I2CD2
    #define I2C_DRIVER I2CD1
    /* Use the custom font */
    #define OLED_FONT_H "lib/glcdfont.c"
#endif
