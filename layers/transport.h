#ifndef TRANS_H
#define TRANS_H

#include <string>
#include <iostream>

class TransportLayer {
    private:
        std::string headerPrefix = "TRANS_HDR";
        std::string layerName = "Transport Layer";
    public:
        std::string encapsulate(const std::string& data);
        std::string decapsulate(const std::string& data);
};


#endif // TRANS_H