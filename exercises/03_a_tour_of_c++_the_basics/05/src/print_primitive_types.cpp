#ifndef _PRINT_PRIMITIVE_TYPES_
#define _PRINT_PRIMITIVE_TYPES_

#include <string>

std::string PrintPrimitiveTypes()
{
    bool w = true;
    char x = 'f';
    int y = 16535;
    double z = 3.14159;
    std::string s = "this is a string";

    std::string out = std::string();

    out += std::to_string(w) + ' ';
    out += x + ' ';
    out += std::to_string(y) + ' ';
    out += std::to_string(z) + ' ';
    out += s;

    return out;
}

#endif
