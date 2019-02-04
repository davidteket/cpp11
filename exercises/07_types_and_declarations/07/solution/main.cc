#include "ascii_printer.h"

#include <limits>

int main()
{
    AsciiTable('a', 'z');
    AsciiTable('0', '9');
    AsciiTable(' ', '~');
}
