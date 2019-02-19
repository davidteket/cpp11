#include <iostream>

// EN: from §10.2
// HU: §10.2-ből.
//
#include "calculator.h"

int main()
{
    std::istream* is = &std::cin;
    Calculator c = Calculator(is);

    c.table["pi"] = 3.1415926535897932385;
    c.table["e"] = 2.7182818284590452354;

    c.Calculate();
}
