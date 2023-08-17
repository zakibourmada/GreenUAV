#ifndef STATE_ESTIMATOR_H
#define STATE_ESTIMATOR_H

#include "sensor_data.h" // Include necessary header file for sensor data
#include "uav_state.h"   // Include necessary header file for UAV state

// Function prototype for state estimation
UAVState estimateUAVState(const SensorData& sensorData);

#endif // STATE_ESTIMATOR_H
