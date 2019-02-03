#ifndef _SIGNED_OR_UNSIGNED_
#define _SIGNED_OR_UNSIGNED_

#include <iostream>
#include <limits>

void SignedOrUnsigned()
{
    if (std::numeric_limits<char>::min() < 0)
      std::cout << "signed" << std::endl;
    else
      std::cout << "unsigned" << std::endl;
}

#endif
