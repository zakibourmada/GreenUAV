#ifndef STATE_ESTIMATOR_H
#define STATE_ESTIMATOR_H

// Include necessary headers
#include "sensor_data.h" // Include the header where SensorData is defined

// Define your data structures here
struct UAVState {
    // Define the structure of UAV state
};

// Declare functions for state estimation
UAVState estimateUAVState(const SensorData& sensorData);

#endif // STATE_ESTIMATOR_H
