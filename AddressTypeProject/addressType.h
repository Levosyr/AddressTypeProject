#ifndef ADDRESSTYPE_H
#define ADDRESSTYPE_H

#include <iostream>
#include <string>

class addressType {
private:
    std::string address;
    std::string city;
    std::string state;
    int zipcode;

public:
    // Constructor with default parameters
    addressType(std::string addr = "", std::string c = "", std::string s = "XX", int zip = 10000);

    // Setters
    void setAddress(const std::string& addr);
    void setCity(const std::string& c);
    void setState(const std::string& s);
    void setZipcode(int zip);

    // Getters
    std::string getAddress() const;
    std::string getCity() const;
    std::string getState() const;
    int getZipcode() const;

    // Print function
    void print() const;
};

#endif // ADDRESSTYPE_H
#pragma once
