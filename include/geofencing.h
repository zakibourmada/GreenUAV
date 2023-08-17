#ifndef GEOFENCING_H
#define GEOFENCING_H

#include "uav_position.h" // Include necessary header file for UAV position
#include "geofence_bounds.h" // Include necessary header file for geofence bounds

// Function prototype for geofencing
bool isWithinGeofence(const UAVPosition& position, const GeofenceBounds& bounds);

#endif // GEOFENCING_H
