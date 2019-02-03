#ifndef _NONPORTABLE_EXAMPLES_
#define _NONPORTABLE_EXAMPLES_

void NonPortableExamples()
{
    char c = 512;
    char d = -127;
    char e = 'é';
    char f = 'æ';
    int g = 0xffffffffff;

    typedef short int8_t;
    typedef int int32_t;
    typedef void* ptr32_t;
    typedef float float64_t;
    typedef double double128_t;
}

#endif
