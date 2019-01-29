#ifndef _READ_PRIMITIVE_TYPES_
#define _READ_PRIMITIVE_TYPES_

#include<string>
#include<iostream>

std::string ReadPrimitiveTypes()
{
    bool w;
    char x;
    int y;
    double z;
    std::string s;

    std::cout<<"enter a bool: "; std::cin >> w;
    std::cout<<"enter a char: "; std::cin >> x;
    std::cout<<"enter an int: "; std::cin >> y;
    std::cout<<"enter a double: "; std::cin >> z;
    std::cout<<"enter a string: "; std::cin >> s;

    std::string out = std::string();
    out += std::to_string(w) + ' ';
    out += x + ' ';
    out += std::to_string(y) + ' ';
    out += std::to_string(z) + ' ';
    out += s;

    return out;
}

#endif
