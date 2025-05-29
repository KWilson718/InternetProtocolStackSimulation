#ifndef APP_H
#define APP_H

#include <string>
#include <iostream>

class ApplicationLayer {
    private:
        std::string headerPrefix = "APP_HDR";
        std::string layerName = "Application Layer";
    public:
        std::string encapsulate(const std::string& data);
        std::string decapsulate(const std::string& data);
};


#endif // APP_H