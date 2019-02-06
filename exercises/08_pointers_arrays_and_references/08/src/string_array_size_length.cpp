#ifndef _STRING_ARRAY_SIZE_LENGTH_
#define _STRING_ARRAY_SIZE_LENGTH_

#include <iostream>

void StringArraySize()
{
    char str[] = "a short string";

    int length = 0;
    char* c = str;

    while(*c)
    {
        ++length;
        ++c;
    }

    std::cout << "The size of 'char str[] = \"a short string\";' is " << (sizeof(char) * (length + 1)) << " bytes" << std::endl;
    std::cout << "The length of 'char str[] = \"a short string\";' is " << (length + 1) << " characters" << std::endl;
}

#endif
