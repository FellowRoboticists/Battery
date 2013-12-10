// -*- c -*-
// Battery library
// copyright Dave Sieh, 2013
// This code is public domain, enjoy!

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
