#include "link.h"

std::string LinkLayer::encapsulate(const std::string& data) {
    std::cout << "[" << layerName << "] Sending: " << data << std::endl;
    std::string encapsulatedData = headerPrefix + "|" + data;
    return encapsulatedData;
}

std::string LinkLayer::decapsulate(const std::string& data) {
    std::cout << "[" << layerName << "] Receiving: " + data << std::endl;
    int pos = data.find('|');
    std::string decapsulatedData= data.substr(pos + 1);
    return decapsulatedData;
}