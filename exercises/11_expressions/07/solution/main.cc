#include "strlen_strcpy_strcmp.h"


#include <iostream>

int main()
{
    char* c1 = "lorem ipsum";
    char* c2;
    char* c3 = "ASDF";
    char* c4 = "AGCX";
    char* c5 = "AGDX";
    char* c6 = "ASDF";

    std::cout << "calling strlen(c1) on: 'lorem ipsum': " << MyCstrFunctions::strlen(c1) << std::endl;
    std::cout << "copying c1 to c2: strcpy(c1, c2) result: " << MyCstrFunctions::strcpy(c1, c2, MyCstrFunctions::strlen(c1)) << std::endl;
    std::cout << "ASDF compared to ASDF with strcmp: " << MyCstrFunctions::strcmp(c6, c3) << std::endl;
    std::cout << "ASDF compared to AGCX with strcmp: " << MyCstrFunctions::strcmp(c4, c3) << std::endl;
    std::cout << "AGCX compared to AGDX with strcmp: " << MyCstrFunctions::strcmp(c5, c4) << std::endl;
}
