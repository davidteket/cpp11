#include "gtest/gtest.h"

#include "date_reader_printer_initializer.h"

#include <iostream>
#include <vector>

TEST(Date, CanConstructDates)
{
    Date d1 = Date();
    Date d2 = Date(-1234, 12345, 32);
    Date d3 = Date(2009, 8, 16);
    Date d4 = Date(d3);

    EXPECT_EQ(2019, d1.year);
    EXPECT_EQ(2, d1.month);
    EXPECT_EQ(9, d1.day);

    EXPECT_EQ(2019, d2.year);
    EXPECT_EQ(2, d2.month);
    EXPECT_EQ(9, d2.day);

    EXPECT_EQ(2009, d3.year);
    EXPECT_EQ(8, d3.month);
    EXPECT_EQ(16, d3.day);

    EXPECT_EQ(2009, d4.year);
    EXPECT_EQ(8, d4.month);
    EXPECT_EQ(16, d4.day);

    Date d5 = Date();
    std::cout << "Enter 2011 10 13 for the test: " << std::endl;
    std::cin >> d5;
    EXPECT_EQ(2011, d5.year);
    EXPECT_EQ(10, d5.month);
    EXPECT_EQ(13, d5.day);


    std::cout << "Tracking dates. Enter the following dates for the test as shown: " << std::endl;
    std::cout << "Enter 2006 6 8 for the test: " << std::endl;
    std::cout << "Enter 2040 11 2 for the test: " << std::endl;
    std::cout << "Enter 2001 7 3 for the test: " << std::endl;
    std::cout << "Enter 1989 1 1 for the test: " << std::endl;

    auto dates = std::vector<Date>();
    d5.ReadDates(dates);
    EXPECT_EQ(4, dates.size());
}
