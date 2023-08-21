#include "resource_manager.h"

ResourceManager::ResourceManager(const char* filename) : filename(filename) {
    // Constructor, if needed
}

ResourceManager::~ResourceManager() {
    // Destructor, if needed
    closeFile();
}

bool ResourceManager::openFile() {
    file.open(filename, std::ios::in);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return false;
    }
    return true;
}

void ResourceManager::closeFile() {
    if (file.is_open()) {
        file.close();
    }
}
