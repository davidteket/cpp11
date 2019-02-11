#include "itoa.h"

#include <iostream>

int main()
{
    const int n = 5;
    char str[n];

    itoa(12345, str, n);
    std::cout << "calling itoa(12345, str, 5) which returns: " << str << std::endl;
}
