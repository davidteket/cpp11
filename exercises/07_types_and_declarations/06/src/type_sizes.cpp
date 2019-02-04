#ifndef _TYPE_SIZES_
#define _TYPE_SIZES_

#include <iostream>

void TypeSizes()
{
    std::cout << "char == " << sizeof(char) << " byte(s)" << std::endl;
    std::cout << "bool == " << sizeof(bool) << " byte(s)" << std::endl;
    std::cout << "int == " << sizeof(int) << " byte(s)" << std::endl;
    std::cout << "float == " << sizeof(float) << " byte(s)" << std::endl;
    std::cout << "double == " << sizeof(double) << " byte(s)" << std::endl << std::endl;

    std::cout << "pointer to char == " << sizeof(char*) << " byte(s)" << std::endl;
    std::cout << "pointer to bool == " << sizeof(bool*) << " byte(s)" << std::endl;
    std::cout << "pointer to int == " << sizeof(int*) << " byte(s)" << std::endl;
    std::cout << "pointer to float == " << sizeof(float*) << " byte(s)" << std::endl;
    std::cout << "pointer to double == " << sizeof(double*) << " byte(s)" << std::endl << std::endl;

    enum Beer { Carlsberg, Tuborg, Heineken };
    enum Color { Red, Green, Blue, Cyan, Yellow, Magenta };
    std::cout << "enumeration type Beer == " << sizeof(Beer) << " byte(s)" << std::endl;
    std::cout << "enumeration type Color == " << sizeof(Color) << " byte(s)" << std::endl;
}

#endif
