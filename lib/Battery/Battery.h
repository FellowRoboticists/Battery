// Battery library
// copyright Dave Sieh, 2013
// This code is public domain, enjoy!

#ifndef _Battery_h_
#define _Battery_h_

#define NUM_CELLS 5

class LEDBlinker;
class Move;

class Battery {
 public:

  /**
     Constructs a new Battery object.
   */
  Battery(int monitorPin, int chargerPin, LEDBlinker *ledBlinker);

  /**
     Initialize the battery system
  */
  void begin();
  void check(Move *mover);

 private:
  /**
     Return the voltage in millivolts.
     See text for voltage divider resistor values
  */
  int batteryMv();
  
  int pin;
  int chargePin;
  LEDBlinker *led;

  // Thresholds are cell millivolts times number of cells.
  const int batteryFull     = 1500 * NUM_CELLS;
  const int batteryWarning  = 1100 * NUM_CELLS;
  const int batteryCritical = 1000 * NUM_CELLS;

};

#endif
