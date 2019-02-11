#include "atoi.h"

#include <iostream>

int main()
{
    std::cout << "2 * (0x7BC) == " << (2 * Conversions::atoi("0x7BC")) << std::endl;
    std::cout << "2 * (0X7BC) == " << (2 * Conversions::atoi("0X7BC")) << std::endl;
    std::cout << "2 * (03674) == " << (2 * Conversions::atoi("03674")) << std::endl;
    std::cout << "2 * (1980) == " << (2 * Conversions::atoi("1980")) << std::endl;
}
