#ifndef DATETYPE_H
#define DATETYPE_H

#include <iostream>

class dateType {
private:
    int month;
    int day;
    int year;

    // Private helper functions
    bool isLeapYear(int year) const;
    int getDaysInMonth(int month, int year) const;

public:
    // Constructor with default parameters
    dateType(int m = 1, int d = 1, int y = 1900);

    // Setter
    void setDate(int m, int d, int y);

    // Getter
    int getMonth() const;
    int getDay() const;
    int getYear() const;

    // Print function
    void print() const;
};

#endif // DATETYPE_H
#pragma once
