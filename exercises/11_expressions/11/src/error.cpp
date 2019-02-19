#include <iostream>
#include <string>

#include "error.h"

int Error::error(const std::string& s)
{
    no_of_errors++;
    std::cerr << "error: " << s << "\n";

    return 1;
}
