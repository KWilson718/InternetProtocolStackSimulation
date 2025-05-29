#ifndef NET_H
#define NET_H

#include <string>
#include <iostream>

class NetworkLayer {
    private:
        std::string headerPrefix = "NET_HDR";
        std::string layerName = "Network Layer";
    public:
        std::string encapsulate(const std::string& data);
        std::string decapsulate(const std::string& data);
};


#endif // NET_H