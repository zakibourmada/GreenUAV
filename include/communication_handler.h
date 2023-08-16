#ifndef COMMUNICATION_HANDLER_H
#define COMMUNICATION_HANDLER_H

// Include necessary headers
#include "communication_data.h" // Assuming you have a CommunicationData structure defined

// Define functions for communication handling
void handleCommunication(const CommunicationData& data);
struct Command;
Command receiveCommand();

// Define Command structure (assuming it's defined elsewhere)
struct Command {
    // Define command members
    int type;
    // Add more command members as needed
};

#endif // COMMUNICATION_HANDLER_H
