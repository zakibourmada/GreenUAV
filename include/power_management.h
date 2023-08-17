#ifndef POWER_MANAGEMENT_H
#define POWER_MANAGEMENT_H

#include "power_data.h"   // Include necessary header file for power data
#include "battery_data.h" // Include necessary header file for battery data
#include "battery_status.h" // Include necessary header file for battery status

// Function prototypes for power management
void managePowerDistribution(const PowerData& data);
BatteryStatus monitorBattery(const BatteryData& data);

#endif // POWER_MANAGEMENT_H
