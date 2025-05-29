#include<iostream>
#include<string>

#include "layers/application.h"
#include "layers/link.h"
#include "layers/network.h"
#include "layers/transport.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    string message = "";
    ApplicationLayer applicationLayer;
    LinkLayer linkLayer;
    NetworkLayer networkLayer;
    TransportLayer transportLayer;

    cout << "Welcome to The Internet Protocol Stack Simulation:" << endl << "Please Enter The Message You'd Like to Transmit..." << endl;
    cin >> message;

    cout << "==== Sending ====" << endl;

    message = applicationLayer.encapsulate(message);
    message = transportLayer.encapsulate(message);
    message = networkLayer.encapsulate(message);
    message = linkLayer.encapsulate(message);

    cout << "==== Recieving ====" << endl;

    message = linkLayer.decapsulate(message);
    message = networkLayer.decapsulate(message);
    message = transportLayer.decapsulate(message);
    message = applicationLayer.decapsulate(message);

    cout << endl << "All Done!" << endl << "Message Recieved: " << message << endl;

    return 0;
}