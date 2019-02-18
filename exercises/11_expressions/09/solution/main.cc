#include "c_cstr_concat.h"

#include <iostream>

int main()
{
    char* c1 = "lorem";
    char* c2 = "ipsum";

    char* c3 = Exercise::cat(c1, c2);
    std::cout << "'lorem' (c1) and 'ipsum' (c2) concatenated: " << c3 << std::endl;
}
