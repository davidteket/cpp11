#ifndef _PRINT_NUMBERS_WITHOUT_ARRAY_OR_VECTOR_
#define _PRINT_NUMBERS_WITHOUT_ARRAY_OR_VECTOR_

#include <iostream>

void PrintNumbersWithoutArrayOrVector()
{
    for (int x : {4, 5, 9, 17, 12})
      std::cout << x << " ";

    std::cout << std::endl;
}

#endif
