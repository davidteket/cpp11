#ifndef _ERROR_
#define _ERROR_

#include <string>
#include <iostream>

class Error {

  public:
    int no_of_errors;

    int error(const std::string& s);
};


#endif
