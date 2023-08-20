#ifndef SERVO_H
#define SERVO_H

#include <stdint.h>  // Include necessary header for data types

// Define constants for servo PWM signal range
#define SERVO_MIN_PULSE_WIDTH 1000  // Minimum pulse width in microseconds
#define SERVO_MAX_PULSE_WIDTH 2000  // Maximum pulse width in microseconds

// Structure to represent a servo motor
struct ServoMotor {
    uint8_t pin;        // GPIO pin number
    uint16_t angle;     // Current angle in degrees
    uint16_t minAngle;  // Minimum angle
    uint16_t maxAngle;  // Maximum angle
};

// Function to attach a servo motor to a pin
void attachServo(struct ServoMotor* servo, uint8_t pin);

// Function to set the angle of a servo motor
void setServoAngle(struct ServoMotor* servo, uint16_t angle);

#endif // SERVO_H
