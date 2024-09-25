#include "addressType.h"

// Constructor with default values
addressType::addressType(std::string addr, std::string c, std::string s, int zip) {
    address = addr;
    city = c;
    setState(s);  // Validate state
    setZipcode(zip);  // Validate zipcode
}

// Setters
void addressType::setAddress(const std::string& addr) {
    address = addr;
}

void addressType::setCity(const std::string& c) {
    city = c;
}

void addressType::setState(const std::string& s) {
    if (s.length() == 2) {
        state = s;
    }
    else {
        state = "XX";  // Default state
    }
}

void addressType::setZipcode(int zip) {
    if (zip >= 11111 && zip <= 99999) {
        zipcode = zip;
    }
    else {
        zipcode = 10000;  // Default zipcode
    }
}

// Getters
std::string addressType::getAddress() const {
    return address;
}

std::string addressType::getCity() const {
    return city;
}

std::string addressType::getState() const {
    return state;
}

int addressType::getZipcode() const {
    return zipcode;
}

// Print function
void addressType::print() const {
    std::cout << address << std::endl;
    std::cout << city << " " << state << ", " << zipcode << std::endl;
}
