#ifndef TELEMETRY_H
#define TELEMETRY_H

#include "telemetry_data.h" // Include necessary header file for telemetry data
#include "battery_status.h" // Include necessary header file for battery status

// Function prototypes for telemetry
void collectAndTransmitTelemetry(const TelemetryData& data);
BatteryStatus getBatteryStatus();
bool checkSystemHealth();

#endif // TELEMETRY_H
