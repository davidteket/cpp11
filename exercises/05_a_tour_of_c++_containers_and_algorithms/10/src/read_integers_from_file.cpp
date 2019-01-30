#ifndef _READ_INTEGERS_FROM_FILE_
#define _READ_INTEGERS_FROM_FILE_

#include <fstream>
#include <string>
#include <iostream>

// HU:
// 999 egész szám fájlból való beolvasása.
//
// EN:
// Reading 999 integers from file.
//
std::string ReadIntegersFromFile()
{
    std::string path = std::string();
    std::cout << "Enter the path for the input file: "; std::cin >> path;
    std::ifstream file { path };

    std::string result = std::string();
    std::string line = std::string();

    while (getline(file, line))
    {
        result += line;
        line = std::string();
    }

    return result;
}

#endif
