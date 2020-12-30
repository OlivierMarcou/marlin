/*==============================================================================

  Marlin Firmware

  (c) 2011-2020 MarlinFirmware
  Portions of Marlin are (c) by their respective authors.
  All code complies with GPLv2 and/or GPLv3

================================================================================

Greetings! Thank you for choosing Marlin 2 as your 3D printer firmware.

To configure Marlin you must edit Configuration.h and Configuration_adv.h
located in the root 'Marlin' folder. Check our Configurations repository to
see if there's a more suitable starting-point for your specific hardware.

Before diving in, we recommend the following essential links:
*/
#include "/home/hpkube/workspace/marlin/Marlin/src/inc/MarlinConfig.h"

#if ENABLED(ULTRA_LCD)
  #if ENABLED(LCD_I2C_TYPE_PCF8575)
    #include <Wire.h>
    #include <LiquidCrystal_I2C.h>
  #elif ENABLED(LCD_I2C_TYPE_MCP23017) || ENABLED(LCD_I2C_TYPE_MCP23008)
    #include <Wire.h>
    #include <LiquidTWI2.h>
  #elif ENABLED(LCM1602)
    #include <Wire.h>
    #include <LCD.h>
    #include <LiquidCrystal_I2C.h>
  #elif ENABLED(DOGLCD)
    #include <U8glib.h> // library for graphics LCD by Oli Kraus (https://github.com/olikraus/U8glib_Arduino)
  #else
    #include <LiquidCrystal.h> // library for character LCD
  #endif
#endif
/*
  - https://marlinfw.org/docs/configuration/configuration.html
    Marlin's configuration options are explained in more detail here.

Getting Help

  - https://reprap.org/forum/list.php?415
    The Marlin Discussion Forum is a great place to get help from other Marlin
    users who may have experienced similar issues to your own.

  - https://github.com/MarlinFirmware/Marlin/issues
    With a free GitHub account you can provide us with feedback, bug reports,
    and feature requests via the Marlin Issue Queue.

Contributing

  - https://marlinfw.org/docs/development/contributing.html
    If you'd like to contribute to Marlin, read this first!

  - https://marlinfw.org/docs/development/coding_standards.html
    Before submitting code get to know the Coding Standards.


------------------------------------------------------------------------------*/
