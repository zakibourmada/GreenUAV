#ifndef STARTUP_H
#define STARTUP_H

// Include necessary headers for your hardware and dependencies
#include "esc.h"            // Example: ESC control functions
#include "sensors.h"        // Example: Sensor calibration functions
#include "communication.h"  // Example: Communication setup functions
#include "flight_modes.h"   // Example: Flight mode configuration functions

// Declare functions for hardware initialization
void initializeHardware();

// Declare functions for sensor calibration and setup
void calibrateSensors();

// Declare functions for communication establishment
void establishCommunication();

// Declare functions for setting initial flight parameters and modes
void setInitialParameters();

// Declare the main startup function
void startup();

#endif // STARTUP_H
