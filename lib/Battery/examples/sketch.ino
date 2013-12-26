// -*- c -*-
// Battery Arduino library
//
// Copyright (c) 2013 Dave Sieh
// See LICENSE.txt for details.

#include <LEDBlinker.h>
#include <Battery.h>

LEDBlinker led(13);
Battery batteryChecker(12, -1, &led);

void setup() {
  batteryChecker.begin();
}

void loop() {
  batteryChecker.check(NULL);
}
