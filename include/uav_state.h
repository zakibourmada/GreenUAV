#ifndef UAV_STATE_H
#define UAV_STATE_H

// Define the UAVState structure
struct UAVState {
    float positionX;      // UAV position in X-axis
    float positionY;      // UAV position in Y-axis
    float positionZ;      // UAV position in Z-axis
    float velocityX;      // UAV velocity in X-axis
    float velocityY;      // UAV velocity in Y-axis
    float velocityZ;      // UAV velocity in Z-axis
    // Add more UAV state fields as needed
};

#endif // UAV_STATE_H
