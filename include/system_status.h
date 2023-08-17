#ifndef SYSTEM_STATUS_H
#define SYSTEM_STATUS_H

// Define the SystemStatus structure
struct SystemStatus {
    bool isArmed;          // Indicates if the system is armed
    bool isEnginesRunning; // Indicates if the engines are running
    bool isEmergency;      // Indicates if an emergency situation is detected
    // Add more system status fields as needed
};

#endif // SYSTEM_STATUS_H
