#ifndef UAV_POSITION_H
#define UAV_POSITION_H

#include <cstdint> // For uint32_t and other types

// Define the UAVPosition structure
struct UAVPosition {
    float latitude;   // Latitude in degrees
    float longitude;  // Longitude in degrees
    float altitude;   // Altitude in meters
};

#endif // UAV_POSITION_H
