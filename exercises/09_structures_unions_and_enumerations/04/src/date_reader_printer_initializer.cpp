#include "date_reader_printer_initializer.h"

#include <vector>
#include <iostream>

Date::Date() { year = 2019; month = 2; day = 9; }

Date::Date(int yyyy, int mm, int dd)
{
    if (((yyyy >= 1000) && (yyyy < 10000)) &&
        (mm >= 1) && (mm <= 12) &&
        (dd >= 1) && (dd <= 31))
        {
            year = yyyy;
            month = mm;
            day = dd;
        }
        else { year = 2019; month = 2; day = 9; }
}

Date::Date(const Date& date)
{
    year = date.year;
    month = date.month;
    day = date.day;
}

std::istream& operator>>(std::istream& is, Date& d)
{
    std::cout << "year: "; is >> d.year;
    std::cout << "month: "; is >> d.month;
    std::cout << "day: "; is >> d.day;

    return is;
}

std::ostream& operator<<(std::ostream& os, const Date& d)
{
    char dot = '.';
    std::string result = {};
    result  += (std::to_string(d.year) + dot
              + std::to_string(d.month) + dot
              + std::to_string(d.day) + dot);

    os << result;
    return os;
}
