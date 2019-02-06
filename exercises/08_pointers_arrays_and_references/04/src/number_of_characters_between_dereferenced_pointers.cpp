#ifndef _NUMBER_OF_CHARACTERS_BETWEEN_DEREFERENCED_POINTERS_
#define _NUMBER_OF_CHARACTERS_BETWEEN_DEREFERENCED_POINTERS_

#include <string>

int NumberOfCharactersBetweenDereferencedPointers(const std::string& inspected, char *const begin, char *const end)
{
    int distance = 0;

    char* i = begin;
    char* j = end;

    while ((++i) < j)
      ++distance;

    return distance;
}

#endif
