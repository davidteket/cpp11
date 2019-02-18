#ifndef _ZERO_DIVIDE_INT_UNDER_AND_OVERFLOW_
#define _ZERO_DIVIDE_INT_UNDER_AND_OVERFLOW_

#include <iostream>
#include <limits>

void WhatHappens()
{
    int x = 1;
    int y = std::numeric_limits<int>::max();
    int z = std::numeric_limits<int>::min();

    std::cout << "Overflow of " << y << ": " << (++y) << std::endl;
    std::cout << "Underflow of " << z << ": " << (--z) << std::endl;
    std::cout << "Divide by zero: 1 / 0 = " << (1 / 0) << std::endl;
}

#endif
