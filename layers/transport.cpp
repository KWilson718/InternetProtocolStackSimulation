#include "transport.h"

std::string TransportLayer::encapsulate(const std::string& data) {
    std::cout << "[" << layerName << "] Sending: " << data << std::endl;
    std::string encapsulatedData = headerPrefix + "|" + data;
    return encapsulatedData;
}

std::string TransportLayer::decapsulate(const std::string& data) {
    std::cout << "[" << layerName << "] Receiving: " + data << std::endl;
    int pos = data.find('|');
    std::string decapsulatedData= data.substr(pos + 1);
    return decapsulatedData;
}