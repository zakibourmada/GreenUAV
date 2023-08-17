#ifndef USE_INTERFACE_H
#define USE_INTERFACE_H

// Include necessary headers
#include "data_packet.h"
#include "uav_position.h"
#include "geofence_bounds.h"

// Define the interface for using certain functionalities
class UseInterface {
public:
    // Virtual destructor for proper polymorphic behavior
    virtual ~UseInterface() {}

    // Function to handle data packets
    virtual void processData(const DataPacket& packet) = 0;

    // Function to process UAV position and geofence
    virtual void processPosition(const UAVPosition& position, const GeofenceBounds& bounds) = 0;
};

#endif // USE_INTERFACE_H
