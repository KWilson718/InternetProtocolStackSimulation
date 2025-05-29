#ifndef LINK_H
#define LINK_H

#include <string>
#include <iostream>

class LinkLayer {
    private:
        std::string headerPrefix = "LINK_HDR";
        std::string layerName = "Link Layer";
    public:
        std::string encapsulate(const std::string& data);
        std::string decapsulate(const std::string& data);
};


#endif // LINK_H