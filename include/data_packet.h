#ifndef DATA_PACKET_H
#define DATA_PACKET_H

#include <cstdint> // For uint8_t and other types

class DataPacket {
public:
    // Constructor
    DataPacket();

    // Destructor
    ~DataPacket();

    // Method to set data in the packet
    void setData(const uint8_t* data, size_t dataSize);

    // Method to get data from the packet
    void getData(uint8_t* buffer, size_t bufferSize) const;

    // Other methods and implementations specific to DataPacket
    // ...

private:
    // Private members or methods, if needed
};

#endif // DATA_PACKET_H
