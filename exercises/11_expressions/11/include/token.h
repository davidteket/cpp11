#ifndef _TOKEN_
#define _TOKEN_

#include <string>

// EN: Token type to determine the type of the current token.
//
// HU: Token típus az aktuális token fajtájának megállapításához.
//
//
enum class Kind : char
{
    name, number, end,
    plus='+', minus='-', mul='*', div='/',
    print=';', assign='=', lp='(', rp=')'
};

struct Token
{
    Kind kind;
    std::string string_value;
    double number_value;
};

#endif
