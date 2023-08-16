#ifndef COMMUNICATION_DATA_H
#define COMMUNICATION_DATA_H

#include <cstdint> // For uint8_t and other types

// Define an enumeration for different message types
enum class MessageType : uint8_t {
    UNKNOWN = 0,
    COMMAND,
    STATUS,
    DATA,
    // Add more message types as needed
};

// Define the CommunicationData structure
struct CommunicationData {
    MessageType messageType;
    size_t dataSize;
    uint8_t* dataPayload;

    // Constructor
    CommunicationData() : messageType(MessageType::UNKNOWN), dataSize(0), dataPayload(nullptr) {}

    // Destructor
    ~CommunicationData() {
        // Clean up memory allocated for dataPayload, if any
        delete[] dataPayload;
    }

    // Methods to initialize and update CommunicationData
    void initialize();
    void updateFromReceivedData(const uint8_t* receivedData, size_t dataSize);
};

#endif // COMMUNICATION_DATA_H
