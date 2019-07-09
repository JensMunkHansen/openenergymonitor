/*  -*- coding: utf-8; mode: c; indent-tabs-mode: nil -*- */

// gcc -dM -E - < /dev/null
// g++ -dM -E -x c++ - < /dev/null
// -dD is similar to -dM but does not include predefined macros

// echo "#include <stdlib.h>" | gcc -x c++ -std=c++11 -dD -E -

const int firmware_version = 10;  // The firmware version 1.0

#include <LiquidCrystal_I2C.h>  // https://github.com/openenergymonitor/LiquidCrystal_I2C
