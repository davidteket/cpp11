#include "time_loop_print_millisecs.h"

#include <iostream>

int main()
{
    std::cout << "Press ^C to interrupt." << std::endl;
    std::cout << "----------------------------------" << std::endl;

    TimedLoop();
}
