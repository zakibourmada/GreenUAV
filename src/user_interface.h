#ifndef USER_INTERFACE_H
#define USER_INTERFACE_H

#include <vector> // Include the necessary headers

// Define your data structures here
struct FlightParameters {
    // Define the structure of flight parameters
};

struct Waypoint {
    // Define the structure of a waypoint
};

enum class FlightMode {
    // Define the different flight modes
};

// Declare functions for user interface
void configureFlightParameters(FlightParameters& parameters);
void setWaypoints(std::vector<Waypoint>& waypoints);
void manageFlightModes(FlightMode& currentMode);

#endif // USER_INTERFACE_H
