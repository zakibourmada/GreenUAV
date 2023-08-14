#ifndef DATA_STORAGE_H
#define DATA_STORAGE_H

#include <vector> // Include the necessary headers

// Define your data structures here
struct ConfigurationData {
    // Define the structure of configuration data
};

struct Waypoint {
    // Define the structure of a waypoint
};

// Declare functions for data storage
void storeConfigurationData(const ConfigurationData& data);
ConfigurationData retrieveConfigurationData();
void storeWaypoints(const std::vector<Waypoint>& waypoints);
std::vector<Waypoint> retrieveWaypoints();

#endif // DATA_STORAGE_H
