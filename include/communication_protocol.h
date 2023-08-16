#ifndef COMMUNICATION_PROTOCOL_H
#define COMMUNICATION_PROTOCOL_H

// Include necessary headers
#include "data_packet.h" // Assuming you have a DataPacket structure defined

// Define functions for communication protocol
void sendData(const DataPacket& data);
DataPacket receiveData();

#endif // COMMUNICATION_PROTOCOL_H
