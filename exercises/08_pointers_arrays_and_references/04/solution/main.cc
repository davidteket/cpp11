#include "number_of_characters_between_dereferenced_pointers.h"

#include <iostream>
#include <string>

int main()
{
    std::string s = { "open interval count" };

    char* p1 = &s[0];
    char* p2 = &s[s.length() - 1];

    char* q1 = &s[5];
    char* q2 = &s[5];

    std::cout << "s: " << s << "\t p1: " << *p1 << "\t p2: " << *p2 << "\t distance: " << NumberOfCharactersBetweenDereferencedPointers(s, p1, p2) << std::endl;
    std::cout << "s: " << s << "\t q1: " << *q1 << "\t q2: " << *q2 << "\t distance: " << NumberOfCharactersBetweenDereferencedPointers(s, q1, q2) << std::endl;
}
