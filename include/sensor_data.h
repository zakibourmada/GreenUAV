#ifndef SENSOR_DATA_H
#define SENSOR_DATA_H

// Define the SensorData structure
struct SensorData {
    float accelerometerX; // Accelerometer reading in X-axis
    float accelerometerY; // Accelerometer reading in Y-axis
    float accelerometerZ; // Accelerometer reading in Z-axis
    float gyroscopeX;     // Gyroscope reading in X-axis
    float gyroscopeY;     // Gyroscope reading in Y-axis
    float gyroscopeZ;     // Gyroscope reading in Z-axis
    // Add more sensor data fields as needed
};

#endif // SENSOR_DATA_H
