#include "pass_array_to_function.h"

#include <string>

int main()
{
    const int M = 12;
    char* months[M] = { "January\0", "February\0", "March\0", "April\0", "May\0", "June\0", "July\0", "August\0", "September\0", "October\0", "November\0", "December\0" };

    PrintMonths(months, M);
}
