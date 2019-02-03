#ifndef _UNDEFINED_IMPLEMENTATION_DEFINED_
#define _UNDEFINED_IMPLEMENTATION_DEFINED_

#include <limits>

// EN:
// The ? means that the behaviour is undefined. The code above will likely to crash this program at runtime.
//
// HU:
// A ? jel jelentése: a viselkedés nem meghatározott. A lenti kód valószínűleg futási idejű programösszeomlást eredményez.
//
void Undefined()
{
    // 1.
    int x;
    x = x;                   // ?

    // 2.
    int arr[10];
    arr[11] = 666;           // ?

    // 3.
    int y = 0;
    int arr2[2] = {1, 2};
    arr2[++y] = y++;         // ?

    // 4.
    int z = 1 / 0;           // ?

    // 5.
    int* q;
    *q = 7;                  // ?
}


void ImplementationDefined()
{
    bool is_32_bits_integer = sizeof(int) == 4;
    bool is_unsigned_character = std::numeric_limits<char>::is_signed;
    bool is_pointer_size_of_4_bytes = sizeof(void*) == 4;
    bool is_character_size_of_2_bytes = sizeof(char) == 2;
    char x = 0xFF;
}

#endif
