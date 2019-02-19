#ifndef _REV_
#define _REV_

namespace Exercise {

    char* rev(char* str)
    {
        char* result = nullptr;

        int length = 0;
        while (*(str + length)) ++length;
        result = new char[length];

        int i = 0;
        for (int j = length - 1; j >= 0; --j) {
            result[i] = str[j];
            ++i;
        }

        return result;
    }
}

#endif
