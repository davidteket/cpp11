#include "date_reader_printer_initializer.h"

int main()
{
    Date d1 = Date();
    Date d2 = Date(-1234, 12345, 32);
    Date d3 = Date(2009, 8, 16);
    Date d4 = Date(d3);

    Date d5 = Date();
    std::cin >> d5;

    std::cout << std::endl;
    std::cout << d5 << std::endl;

    std::vector<Date> dates = {d1, d2, d3, d4, d5 };

    d1.PrintDates(dates);
    d1.ReadDates(dates);
    d1.PrintDates(dates);
}
