#ifndef _DATE_READER_PRINTER_INITIALIZER_
#define _DATE_READER_PRINTER_INITIALIZER_

#include <vector>
#include <iostream>

struct Date {

    int year;
    int month;
    int day;

    Date();
    Date(int yyyy, int mm, int dd);
    Date(const Date& date);

    friend std::istream& operator>>(std::istream& is, Date& d);
    friend std::ostream& operator<<(std::ostream& os, const Date& d);

    void ReadDates(std::vector<Date>& dates)
    {
        std::cout << "Press q to stop reading dates." << std::endl;
        char c;

        while(std::cin >> c && (c != 'q'))
        {
            Date d = Date();
            std::cin >> d;

            dates.push_back(d);
        }
    }

    static void PrintDates(std::vector<Date>&  dates)
    {
        for (auto d : dates)
            std::cout << d << std::endl;
    }
};

#endif
