#ifndef MISSION_PLANNER_H
#define MISSION_PLANNER_H

#include "waypoint.h" // Include necessary header file for waypoints

// Function prototypes for mission planning
void planMission(const Waypoint* waypoints, size_t numWaypoints);
void uploadMissionToUAV();

#endif // MISSION_PLANNER_H
