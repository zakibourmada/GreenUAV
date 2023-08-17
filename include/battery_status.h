#ifndef BATTERY_STATUS_H
#define BATTERY_STATUS_H

// Define the BatteryStatus structure
struct BatteryStatus {
    float voltage;    // Battery voltage in volts
    float current;    // Battery current in amperes
    float remainingCapacity; // Remaining battery capacity in ampere-hours
    // Add more battery status fields as needed
};

#endif // BATTERY_STATUS_H
