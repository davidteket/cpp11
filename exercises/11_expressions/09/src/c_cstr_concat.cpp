#ifndef _C_CSTR_CONCAT_
#define _C_CSTR_CONCAT_

#include <iostream>

namespace Exercise {

    char* cat(const char* c1, const char* c2)
    {
        char* result = nullptr;

        int n1 = 0;
        int n2 = 0;
        while (*(c1 + n1)) ++n1;
        while (*(c2 + n2)) ++n2;

        // EN: allocation of c1 + c2 length. // HU: c1 + c2 hossznyi tár foglalása.
        int len = (n1 + n2 + 1);
        result = new char[len];

        // EN: copying c1. // HU: c1 átmásolása.
        int i = 0;
        while (i < n1)
        {
            *(result + i) = *(c1 + i);
            ++i;
        }

        // EN: copying c2. // HU: c2 átmásolása.
        int j = 0;
        while (j < n2)
        {
            *(result + (i + j)) = *(c2 + j);
            ++j;
        }

        // EN: terminating c-string. // HU: c-karakterlánc lezárása.
        *(result + (len - 1)) = 0;
        return result;
    }

}

#endif
