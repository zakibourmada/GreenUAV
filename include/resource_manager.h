#ifndef RESOURCE_MANAGER_H
#define RESOURCE_MANAGER_H

// Include necessary headers
#include <iostream>
#include <fstream>

class ResourceManager {
public:
    ResourceManager(const char* filename);
    ~ResourceManager();

    bool openFile();
    void closeFile();

    // Add more resource management methods as needed
    
private:
    const char* filename;
    std::fstream file;
};

#endif // RESOURCE_MANAGER_H
