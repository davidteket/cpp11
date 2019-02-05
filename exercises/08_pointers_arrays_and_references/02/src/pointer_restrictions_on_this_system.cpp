#ifndef _POINTER_RESTRICTIONS_ON_THIS_SYSTEM_
#define _POINTER_RESTRICTIONS_ON_THIS_SYSTEM_

void PointerRestrictionsOnThisSystem()
{
    // char* vs. int*
    //
    static_assert((sizeof(char*) < sizeof(int*)), "int* cannot be casted to char* on this system");

    // char* vs. void*
    //
    static_assert((sizeof(char*) < sizeof(void*)), "void* cannot be casted to void* on this system");

    // int* vs. void*
    //
    static_assert((sizeof(int*) < sizeof(void*)), "void* cannot be casted to int*");
}

#endif
