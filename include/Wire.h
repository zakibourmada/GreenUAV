#ifndef WIRE_H
#define WIRE_H

#include <stdint.h>  // Include necessary header for data types

// Define constants for I2C status
#define I2C_OK 0
#define I2C_ERROR 1

// Function to initialize the I2C communication
void initI2C();

// Function to start an I2C transmission
int startTransmission(uint8_t address);

// Function to send a byte during I2C transmission
int sendByte(uint8_t byte);

// Function to receive a byte during I2C reception
uint8_t receiveByte();

// Function to stop the I2C transmission
void stopTransmission();

#endif // WIRE_H
