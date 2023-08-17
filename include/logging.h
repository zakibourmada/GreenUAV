#ifndef LOGGING_H
#define LOGGING_H

#include <iostream> // Include necessary header for output stream

// Enum for log levels
enum LogLevel {
    INFO,
    WARNING,
    ERROR
};

// Function prototypes for logging
void logMessage(LogLevel level, const std::string& message);

#endif // LOGGING_H
