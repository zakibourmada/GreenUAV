#ifndef NAVIGATION_H
#define NAVIGATION_H

#include "uav_state.h" // Include necessary header file for UAV state
#include "waypoint.h"  // Include necessary header file for waypoints

// Function prototypes for navigation
void navigateToWaypoint(const Waypoint& targetWaypoint, const UAVState& currentState);

#endif // NAVIGATION_H
