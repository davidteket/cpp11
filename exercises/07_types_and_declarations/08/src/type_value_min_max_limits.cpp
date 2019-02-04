#ifndef _TYPE_VALUE_MIN_MAX_LIMITS_
#define _TYPE_VALUE_MIN_MAX_LIMITS_

#include <limits>
#include <iostream>

void TypeValueMinMaxLimits()
{
    std::cout << "smallest possible value of bool: " << std::numeric_limits<bool>::min() << std::endl;
    std::cout << "largest possible value of bool: " << std::numeric_limits<bool>::max() << std::endl << std::endl;

    std::cout << "smallest possible value of char: " << std::numeric_limits<char>::min() << std::endl;
    std::cout << "largest possible value of char: " << std::numeric_limits<char>::max() << std::endl << std::endl;

    std::cout << "smallest possible value of short: " << std::numeric_limits<short>::min() << std::endl;
    std::cout << "largest possible value of short: " << std::numeric_limits<short>::max() << std::endl << std::endl;

    std::cout << "smallest possible value of int: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "largest possible value of int: " << std::numeric_limits<int>::max() << std::endl << std::endl;

    std::cout << "smallest possible value of long: " << std::numeric_limits<long>::min() << std::endl;
    std::cout << "largest possible value of long: " << std::numeric_limits<long>::max() << std::endl << std::endl;

    std::cout << "smallest possible value of long long: " << std::numeric_limits<long long>::min() << std::endl;
    std::cout << "largest possible value of long long: " << std::numeric_limits<long long>::max() << std::endl << std::endl;

    std::cout << "smallest possible value of float: " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "largest possible value of float: " << std::numeric_limits<float>::max() << std::endl << std::endl;

    std::cout << "smallest possible value of double: " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "largest possible value of double: " << std::numeric_limits<double>::max() << std::endl << std::endl;

    std::cout << "smallest possible value of long double: " << std::numeric_limits<long double>::min() << std::endl;
    std::cout << "largest possible value of long double: " << std::numeric_limits<long double>::max() << std::endl << std::endl;

    std::cout << "smallest possible value of unsigned: " << std::numeric_limits<unsigned>::min() << std::endl;
    std::cout << "largest possible value of unsigned: " << std::numeric_limits<unsigned>::max() << std::endl << std::endl;

    std::cout << "smallest possible value of unsigned long: " << std::numeric_limits<unsigned long>::min() << std::endl;
    std::cout << "largest possible value of unsigned long: " << std::numeric_limits<unsigned long>::max() << std::endl << std::endl;
}

#endif
