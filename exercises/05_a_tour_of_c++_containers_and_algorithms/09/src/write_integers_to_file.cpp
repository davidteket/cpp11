#ifndef _WRITE_INTEGERS_TO_FILE_
#define _WRITE_INTEGERS_TO_FILE_

#include <fstream>
#include <string>
#include <iostream>

// HU:
// 999 egész szám fájlba írása. A kimeneti fájlban sortörés minden tizedik szám után,
// számok elválasztása szóközzel.
//
// EN:
// Writing 999 integers into a file. The produced file has line breaks after every 10th integer,
// delimiting numbers with whitespace.
//
void WriteIntegersToFile()
{
    std::string path = std::string();
    std::cout << "Enter the path for the output file: "; std::cin >> path;
    std::ofstream file { path };

    for (int i = 0; i < 1000; ++i)
    {
        file << std::to_string(i);

        if ((i % 10) == 0)
          file << '\n';
        else
          file << ' ';
    }
}

#endif
