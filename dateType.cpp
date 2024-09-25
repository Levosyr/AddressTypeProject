#include "dateType.h"

// Constructor with default date (January 1, 1900)
dateType::dateType(int m, int d, int y) {
    setDate(m, d, y);
}

// Set the date and validate it
void dateType::setDate(int m, int d, int y) {
    if (y >= 1900) {
        year = y;
    }
    else {
        year = 1900;  // Default year
        std::cout << "Date invalid, setting to 1/1/1900" << std::endl;
        month = 1;
        day = 1;
        return;
    }

    if (m >= 1 && m <= 12) {
        month = m;
    }
    else {
        month = 1;  // Default month
        std::cout << "Date invalid, setting to 1/1/1900" << std::endl;
        day = 1;
        return;
    }

    int maxDay = getDaysInMonth(month, year);
    if (d >= 1 && d <= maxDay) {
        day = d;
    }
    else {
        day = 1;  // Default day
        std::cout << "Date invalid, setting to 1/1/1900" << std::endl;
    }
}

// Get the number of days in a month, considering leap years for February
int dateType::getDaysInMonth(int m, int y) const {
    if (m == 2) {  // February
        return isLeapYear(y) ? 29 : 28;
    }
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;  // April, June, September, November
    }
    return 31;  // January, March, May, July, August, October, December
}

// Check if the year is a leap year
bool dateType::isLeapYear(int y) const {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

// Getters
int dateType::getMonth() const {
    return month;
}

int dateType::getDay() const {
    return day;
}

int dateType::getYear() const {
    return year;
}

// Print the date in the format month-day-year
void dateType::print() const {
    std::cout << month << "-" << day << "-" << year;
}
