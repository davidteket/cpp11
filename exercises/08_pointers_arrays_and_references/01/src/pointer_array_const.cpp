#ifndef _POINTER_ARRAY_CONST_
#define _POINTER_ARRAY_CONST_

#include <string>

void PointerArrayConst()
{
    char c = 'x';
    char* pointer_to_char = &c;                                   // p_t_c -> c

    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int& reference_to_int_array = *array;                         // r_t_i_a -> a[0]

    std::string array2[] = { "first", "second", "third" };
    std::string* pointer_to_array_of_characterstrings = array2;   // p_t_a_o_cs -> a2[0]

    char** pointer_to_pointer_to_character = &pointer_to_char;    // p_t_p_t_c -> p_t_c -> c

    const int constant_integer = 7;

    int x = 9;
    const int* pointer_to_constant_integer = &x;                  // HU: a mutatott érték nem lesz módosítható. // EN: the pointed value will be unmodifieable.

    int* p = &x;
    int *const constant_pointer_to_integer = p;                   // HU: ez a mutató nem lesz módosítható. // EN: this pointer will be unmodifieable.
}

#endif
