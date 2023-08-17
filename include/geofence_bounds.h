#ifndef GEOFENCE_BOUNDS_H
#define GEOFENCE_BOUNDS_H

// Define the GeofenceBounds structure
struct GeofenceBounds {
    float minLatitude;   // Minimum latitude boundary in degrees
    float maxLatitude;   // Maximum latitude boundary in degrees
    float minLongitude;  // Minimum longitude boundary in degrees
    float maxLongitude;  // Maximum longitude boundary in degrees
    float minHeight;     // Minimum altitude boundary in meters
    float maxHeight;     // Maximum altitude boundary in meters
};

#endif // GEOFENCE_BOUNDS_H
