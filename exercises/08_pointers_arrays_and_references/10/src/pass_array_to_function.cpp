#ifndef _PASS_ARRAY_TO_FUNCTION_
#define _PASS_ARRAY_TO_FUNCTION_

#include <iostream>

// EN:
// Passing null terminated character string array to function.
// The array argument indicates the 1. array of pointers and 2. pointer to the first element of those pointers.
//
// HU:
// Null terminált karakterláncok tömbjének átadása függvénynek.
// A tömb argumentum az 1. mutatók tömbjét és 2. annak első elemére hivatkozó mutatót jelöl.
//
void PrintMonths(char** months, const int& count)
{
    for (int i = 0; i < count; ++i)
    {
        char* arr = months[i];            // EN: Referring to the ith pointer in the array of pointers. // HU: Hivatkozás az i-edik mutatóra a mutatók tömbjében.
        while ((*arr) != '\0')
        {
            std::cout << *arr;
            ++arr;                       // EN: Referring to the next pointer which points to the next character in the sequence.
                                         // HU: Hivatkozás a következő mutatóra, amely a következő karakterre mutat a szekvenciában.
        }

        std::cout << std::endl;
    }
}

#endif
