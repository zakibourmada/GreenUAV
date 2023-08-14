#ifndef ACTUATOR_INTERFACE_H
#define ACTUATOR_INTERFACE_H

#include "flight_control.h"  // Include necessary headers, such as for FlightControlOutput

// Function to initialize actuators and their communication interfaces
void initializeActuators();

// Function to send control signals to actuators based on FlightControlOutput
void sendControlSignalsToActuators(const FlightControlOutput& controlOutput);

#endif // ACTUATOR_INTERFACE_H
