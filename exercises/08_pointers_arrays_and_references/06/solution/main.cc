#include "out_of_range_experiments.h"

#include <iostream>

int main()
{
    std::cout << "Out of range experimenting. All arrays used containing 5 integers." << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;

    OneBeyondFirst();
    OneBeyondLast();

    FarBeyondFirst();
    FarBeyondLast();

    std::cout << std::endl << "Note: No heap arrays dropped segmentation fault in any experiment. " << std::endl;
}
