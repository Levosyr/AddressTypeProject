#include <iostream>
#include "addressType.h"

int main() {
    std::cout << "Testing default constructor ..." << std::endl;
    addressType defAddress;
    defAddress.print();
    std::cout << std::endl;

    std::cout << "Testing constructor with parameters ..." << std::endl;
    addressType address("123 South Street", "Newport News", "VA", 23664);
    address.print();
    std::cout << std::endl;

    std::cout << "Testing invalid state (Virginia)..." << std::endl;
    address.setState("Virginia");
    address.print();
    std::cout << std::endl;

    std::cout << "Testing invalid zipcode (55555555)..." << std::endl;
    address.setZipcode(55555555);
    address.print();
    std::cout << std::endl;

    std::cout << "Testing valid address ..." << std::endl;
    address.setAddress("44 East Main Street");
    address.setCity("Hampton");
    address.setState("VA");
    address.setZipcode(23669);
    address.print();
    std::cout << std::endl;

    return 0;
}
