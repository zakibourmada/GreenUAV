#ifndef WIFI_H
#define WIFI_H

#include <stdint.h>  // Include necessary header for data types

// Enumeration for WiFi connection status
enum WiFiStatus {
    WIFI_DISCONNECTED,
    WIFI_CONNECTING,
    WIFI_CONNECTED,
    WIFI_ERROR
};

// Structure to hold WiFi configuration
struct WiFiConfig {
    const char* ssid;
    const char* password;
};

// Function to initialize WiFi module
void initializeWiFi();

// Function to connect to a WiFi network
WiFiStatus connectToWiFi(const WiFiConfig* config);

// Function to send data over WiFi
bool sendDataOverWiFi(const char* data);

#endif // WIFI_H
