#ifndef _COUNT_CHAR_PAIRS_IN_STRINGS_
#define _COUNT_CHAR_PAIRS_IN_STRINGS_

#include <string>

// EN:
// If p is the pair and s is the input string then s(i, i + 1) counts as a found pair if it is equal to p.
//
// HU:
// Ha p a pár és s a bemeneti karakterlánc, akkor s(i, i + 1) egy talált párnak számít ha egyenlő p-vel.
//

int CountCharPairsInString(const std::string& pair, const std::string& s)
{
    int result = 0;

    for (int i = 0; i < s.length() - 2; ++i)
    {
        std::string tmp {};
        tmp += s[i];
        tmp += s[i + 1];

        if (tmp == pair)
          ++result;
    }

    return result;
}

int CountCharPairsInCstyleString(const char* pair, const char* s)
{
    int result = 0;

    while (*(s + 1) != '\0')
    {
        if (((*pair) == (*s)) && ((*(pair + 1)) == (*(s + 1))))
          ++result;

        ++s;
    }

    return result;
}

#endif
