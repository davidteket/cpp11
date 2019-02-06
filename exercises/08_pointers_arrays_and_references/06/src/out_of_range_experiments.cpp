#ifndef _OUT_OF_RANGE_EXPERIMENTS_
#define _OUT_OF_RANGE_EXPERIMENTS_

#include "out_of_range_experiments.h"

#include <iostream>

#define JUST 1
#define FAR 12345

int global_array[] = { 1, 2, 3, 4, 5 };

class C {

  public:
      int array_member[5] = { 1, 2, 3, 4, 5 };
};

void OneBeyondFirst()
{
    std::cout << "Running OneBeyondFirst()..." << std::endl;

    int* global_array_pointer = global_array;
    int local_array[] = { 1, 2, 3, 4, 5 };
    int* heap_array = new int[5] { 1, 2, 3, 4, 5 };

    C c = C();
    int* member_array_pointer = c.array_member;

    // EN: Out-of-range access below. Experiment code only.
    //
    // HU: Tartományon kívüli hozzáférések. Csak kísérleti jellegű.
    //
    std::cout << *(global_array_pointer - JUST) << std::endl;
    *(global_array_pointer - JUST) = 0;

    std::cout << local_array[-JUST] << std::endl;
    local_array[-JUST] = 0;

    std::cout << *(heap_array - JUST) << std::endl;
    *(heap_array - JUST) = 0;

    /*std::cout << *(member_array_pointer - JUST) << std::endl;                 // Segmentation fault (core dumped)
    *(member_array_pointer - JUST) = 0;*/                                       // Segmentation fault (core dumped)

    std::cout << std::endl;
    std::cout << " Segmentation fault on member array[-1] while READ" << std::endl;
    std::cout << " Segmentation fault on member array[-1] while WRITE" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl << std::endl;
}

void OneBeyondLast()
{
    std::cout << "Running OneBeyondLast()..." << std::endl;

    int* global_array_pointer = global_array;
    int local_array[] = { 1, 2, 3, 4, 5 };
    int* heap_array = new int[5] { 1, 2, 3, 4, 5 };

    C c = C();
    int* member_array_pointer = c.array_member;

    // EN: Out-of-range access below. Experiment code only.
    //
    // HU: Tartományon kívüli hozzáférések. Csak kísérleti jellegű.
    //
    std::cout << *(global_array_pointer + 4 + JUST) << std::endl;
    *(global_array_pointer + 4 + JUST) = 0;

    std::cout << local_array[4 + JUST] << std::endl;
    local_array[4 + JUST] = 0;

    std::cout << *(heap_array + 4 + JUST) << std::endl;
    *(heap_array + 4 + JUST) = 0;

    std::cout << *(member_array_pointer + 4 + JUST) << std::endl;
    *(member_array_pointer + 4 + JUST) = 0;

    std::cout << std::endl;
    std::cout << " No segmentation fault on any out-of-range access while trying all arrays" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl << std::endl;
}

void FarBeyondFirst()
{
    std::cout << "Running FarBeyondFirst()..." << std::endl;

    int* global_array_pointer = global_array;
    int local_array[] = { 1, 2, 3, 4, 5 };
    int* heap_array = new int[5] { 1, 2, 3, 4, 5 };

    C c = C();
    int* member_array_pointer = c.array_member;

    // EN: Out-of-range access below. Experiment code only.
    //
    // HU: Tartományon kívüli hozzáférések. Csak kísérleti jellegű.
    //
    /*std::cout << *(global_array_pointer - FAR) << std::endl;*/                // Segmentation fault (core dumped)
    /**(global_array_pointer - FAR) = 0;*/                                      // Segmentation fault (core dumped)

    std::cout << local_array[-FAR] << std::endl;
    local_array[-FAR] = 0;

    std::cout << *(heap_array - FAR) << std::endl;
    *(heap_array - FAR) = 0;

    std::cout << *(member_array_pointer - FAR) << std::endl;
    *(member_array_pointer - FAR) = 0;

    std::cout << std::endl;
    std::cout << " Segmentation fault on global array[-12345] while READ" << std::endl;
    std::cout << " Segmentation fault on global array[-12345] while WRITE" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl << std::endl;
}

void FarBeyondLast()
{
    std::cout << "Running FarBeyondLast()..." << std::endl;

    int* global_array_pointer = global_array;
    int local_array[] = { 1, 2, 3, 4, 5 };
    int* heap_array = new int[5] { 1, 2, 3, 4, 5 };

    C c = C();
    int* member_array_pointer = c.array_member;

    // EN: Out-of-range access below. Experiment code only.
    //
    // HU: Tartományon kívüli hozzáférések. Csak kísérleti jellegű.
    //
    /*std::cout << *(global_array_pointer + 4 + FAR) << std::endl;*/            // Segmentation fault (core dumped)
    /**(global_array_pointer + 4 + FAR) = 0;*/                                  // Segmentation fault (core dumped)

    /*std::cout << local_array[4 + FAR] << std::endl;*/                         // Segmentation fault (core dumped)
    /*local_array[4 + FAR] = 0;*/                                               // Segmentation fault (core dumped)

    std::cout << *(heap_array + 4 + FAR) << std::endl;
    *(heap_array + 4 + FAR) = 0;

    /*std::cout << *(member_array_pointer + 4 + FAR) << std::endl;*/            // Segmentation fault (core dumped)
    /**(member_array_pointer + 4 + FAR) = 0;*/                                  // Segmentation fault (core dumped)

    std::cout << std::endl;
    std::cout << " Segmentation fault on global array[12345] while READ" << std::endl;
    std::cout << " Segmentation fault on global array[12345] while WRITE" << std::endl;
    std::cout << " Segmentation fault on local array[12345] while READ" << std::endl;
    std::cout << " Segmentation fault on local array[12345] while WRITE" << std::endl;
    std::cout << " Segmentation fault on member array[12345] while READ" << std::endl;
    std::cout << " Segmentation fault on member array[12345] while WRITE" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl << std::endl;
}

#endif
