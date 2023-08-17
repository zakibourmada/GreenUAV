#ifndef KALMAN_FILTER_H
#define KALMAN_FILTER_H

#include "raw_sensor_data.h" // Include necessary header file for raw sensor data
#include "filtered_data.h"   // Include necessary header file for filtered data

// Function prototypes for Kalman filter
FilteredData applyKalmanFilter(const RawSensorData& rawSensorData);

#endif // KALMAN_FILTER_H
