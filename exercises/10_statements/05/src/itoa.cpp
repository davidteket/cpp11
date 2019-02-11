#ifndef _ITOA_
#define _ITOA_

#include <cmath>

char* itoa(int i, char* b, int n)
{
    int base = 10;

    int j = 0;
    while (n)
    {
        int times = (i / pow(base, n - 1));

        b[j] = ('0' + times);
        i -= (times * pow(base, n - 1));

        // base^n => base^(n - 1)
        // b[j] => b[j + 1]
        //
        --n; ++j;
    }

    return b;
}

#endif
