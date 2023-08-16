#ifndef ERROR_TYPES_H
#define ERROR_TYPES_H

enum class ErrorType : uint8_t {
    COMMUNICATION_ERROR,
    SENSOR_FAILURE,
    ACTUATOR_FAILURE,
    SYSTEM_ERROR,
    // Add more error types as needed
};

#endif // ERROR_TYPES_H
