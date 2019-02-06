#include "function_call_variations_on_one_type_and_temp_variable_by_compiler.h"

int main()
{
    char c = 'a';
    signed char sc = 49;
    unsigned char uc = 3300;

    f(c);     // EN: legal.
    f(sc);    // EN: legal.
    f(uc);    // EN: legal may get truncated.

    g(c);     // EN: legal.
    // g(sc); // EN: error: cannot initialize char& with rvalue type of char. Referrer type must match with the referred type.
    // g(uc); // EN: error: cannot initialize char& with rvalue type of char. Referrer type must match with the referred type.

    h(c);     // EN: legal.
    h(sc);    // EN: legal. Introduces a temporary variable which gets assigned to const char&
    h(uc);    // EN: legal may get truncated. Introduces a temporary variable which gets assigned to const char&
}
