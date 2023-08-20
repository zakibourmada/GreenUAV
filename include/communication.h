#ifndef COMMUNICATION_H
#define COMMUNICATION_H

// Include necessary headers for communication libraries
#include <WiFi.h>  // Example: Library for WiFi communication

// Function to establish communication
void establishCommunication();

// Function to send telemetry data
void sendTelemetry(TelemetryData data);

#endif // COMMUNICATION_H
