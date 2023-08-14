#ifndef LOGGING_H
#define LOGGING_H

// Include necessary headers
#include "flight_event.h" // Include the header where FlightEvent is defined
#include "sensor_data.h"  // Include the header where SensorData is defined
#include "system_status.h"// Include the header where SystemStatus is defined

// Declare functions for logging
void logFlightEvent(const FlightEvent& event);
void logSensorData(const SensorData& data);
void logSystemStatus(const SystemStatus& status);

#endif // LOGGING_H
