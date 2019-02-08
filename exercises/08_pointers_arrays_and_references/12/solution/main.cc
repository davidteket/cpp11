#include "count_char_pairs_in_strings.h"

#include <string>
#include <iostream>

int main()
{
    auto str = std::string("xabaacbaxabb");
    auto p1 = std::string("ab");

    char* cstr = {"xabaacbaxabb\0"};
    char* cp2 = {"ab\0"};

    std::cout << p1 << " occurs in " << str << ": \t" << CountCharPairsInString(p1, str) << " times." << std::endl;
    std::cout << cp2 << " occurs in " << cstr << ": \t" << CountCharPairsInCstyleString(cp2, cstr) << " times." << std::endl;
}
