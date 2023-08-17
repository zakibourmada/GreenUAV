#ifndef SAFETY_CHECKS_H
#define SAFETY_CHECKS_H

#include "system_status.h" // Include necessary header file for system status
#include "sensor_data.h"   // Include necessary header file for sensor data
#include "safety_status.h" // Include necessary header file for safety status

// Function prototype for safety checks
SafetyStatus performSafetyChecks(const SystemStatus& systemStatus, const SensorData& sensorData);

#endif // SAFETY_CHECKS_H
