#include "rev.h"

#include <iostream>

int main()
{
    char* c = "fdsa";

    std::cout << "before reverse (c) : '" << c << "'" << std::endl;
    char* d = Exercise::rev(c);
    std::cout << "after reverse (c) = d : '" << d << "'" << std::endl;
}
