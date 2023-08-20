#ifndef MPU6050_H
#define MPU6050_H

#include <Wire.h>    // Include the I2C library for communication
#include <stdint.h>  // Include necessary header for data types

// Define MPU6050 register addresses
#define MPU6050_ADDRESS 0x68
#define MPU6050_ACCEL_XOUT_H 0x3B
#define MPU6050_TEMP_OUT_H 0x41
// ... Add more register addresses as needed

// Structure to hold sensor data
struct MPU6050Data {
    int16_t accelerometerX;
    int16_t accelerometerY;
    int16_t accelerometerZ;
    int16_t temperature;
    // ... Add more data fields as needed
};

// Function to initialize the MPU6050 sensor
void initializeMPU6050();

// Function to read sensor data from the MPU6050
void readMPU6050Data(struct MPU6050Data* data);

#endif // MPU6050_H
