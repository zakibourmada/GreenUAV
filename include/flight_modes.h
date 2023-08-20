#ifndef FLIGHT_MODES_H
#define FLIGHT_MODES_H

// Define flight modes or enum constants
enum FlightMode {
    MANUAL,
    AUTONOMOUS,
    // Add more flight modes as needed
};

// Function to set the current flight mode
void setFlightMode(FlightMode mode);

#endif // FLIGHT_MODES_H
