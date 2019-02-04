#ifndef _TYPE_SIZES_IN_CHAR_SIZE_
#define _TYPE_SIZES_IN_CHAR_SIZE_

#include <iostream>

void TypeSizesInCharSize()
{
    std::cout << "size of bool in number of chars: " << ((int)(sizeof(bool) / sizeof(char))) << std::endl;
    std::cout << "size of char in number of chars: " << ((int)(sizeof(char) / sizeof(char))) << std::endl;
    std::cout << "size of short in number of chars: " << ((int)(sizeof(short) / sizeof(char))) << std::endl;
    std::cout << "size of int in number of chars: " << ((int)(sizeof(int) / sizeof(char))) << std::endl;
    std::cout << "size of long in number of chars: " << ((int)(sizeof(long) / sizeof(char))) << std::endl;
    std::cout << "size of long long in number of chars: " << ((int)(sizeof(long long) / sizeof(char))) << std::endl;
    std::cout << "size of float in number of chars: " << ((int)(sizeof(float) / sizeof(char))) << std::endl;
    std::cout << "size of double in number of chars: " << ((int)(sizeof(double) / sizeof(char))) << std::endl;
    std::cout << "size of long double in number of chars: " << ((int)(sizeof(long double) / sizeof(char))) << std::endl;
    std::cout << "size of unsigned in number of chars: " << ((int)(sizeof(unsigned) / sizeof(char))) << std::endl;
    std::cout << "size of unsigned long in number of chars: " << ((int)(sizeof(unsigned long) / sizeof(char))) << std::endl;
}

#endif
