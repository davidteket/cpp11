#ifndef _CALENDAR_
#define _CALENDAR_

#include <iostream>

void CalendarWithoutStruct()
{
    const int N = 12;
    char* array[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30 };

    for (int i = 0; i < N; ++i)
    {
        char* month = array[i];
        std::cout << days[i] << "\t";

        while (*month) {
            std::cout << *month;
            ++month;
        }

        std::cout << std::endl;
    }

    std::cout << std::endl;
}

struct Month {
    std::string name;
    int days;
};

void CalendarWithStruct()
{
    const int N = 12;
    Month months[N] = {
        {{"January"}, 31},
        {{"February"}, 28},
        {{"March"}, 31},
        {{"April"}, 30},
        {{"May"}, 31},
        {{"June"}, 30},
        {{"July"}, 31},
        {{"August"}, 30},
        {{"September"}, 31},
        {{"October"}, 30},
        {{"November"}, 31},
        {{"December"}, 30}
    };

    for (int i = 0; i < N; ++i)
        std::cout << months[i].days << "\t" << months[i].name << std::endl;

    std::cout << std::endl;
}

#endif
