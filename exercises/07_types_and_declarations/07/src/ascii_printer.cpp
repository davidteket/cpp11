#ifndef _ASCII_PRINTER_
#define _ASCII_PRINTER_

#include "ascii_printer.h"

#include <string>
#include <iostream>

std::string ToHex(int x)
{
    std::string result = std::string();

    int c;
    int base = 16;

    while (x)
    {
        // c(i) == x mod 16
        // x(i) == x / 16
        //
        c = x % base;
        x /= base;

        switch (c) {
            case 0: case 1: case 2: case 3:
            case 4: case 5: case 6: case 7:
            case 8: case 9:
                result += (char)(c + 48);
                break;

            case 10:
                result += 'A';
                break;

            case 11:
                result += 'B';
                break;

            case 12:
                result += 'C';
                break;

            case 13:
                result += 'D';
                break;

            case 14:
                result += 'E';
                break;

            case 15:
                result += 'F';
                break;
        }
    } // EN: End of while loop.  // HU: Ciklus vége.

    std::string tmp = std::string("0x");
    for (int i = result.length() - 1; i >= 0; --i)
      tmp += result[i];

    result = tmp;
    return result;
}

void AsciiTable(char from, char to)
{
    std::cout << std::endl << "CH\t\tDEC\t\tHEX" << std::endl;

    for (char i = from; i <= to; ++i)
    {
        int dec = i;
        std::string hex = ToHex(dec);

        std::cout << i << "\t\t" << std::to_string(dec) << "\t\t" << hex << std::endl;
    }
}

#endif
