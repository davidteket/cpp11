#ifndef _STRUCT_ALIGNMENT_
#define _STRUCT_ALIGNMENT_

#include <iostream>

struct Bad {
    bool b;
    char c;
    int i;
    long l;
    double d;
    long double ld;
};

struct Good {
    long double ld;
    double d;
    long l;
    int i;
    char c;
    bool b;
};

void BadStructPractice()
{
    std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;
    std::cout << "sizeof(char): " << sizeof(char) << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(long): " << sizeof(long) << std::endl;
    std::cout << "sizeof(double): " << sizeof(double) << std::endl;
    std::cout << "sizeof(long double): " << sizeof(long double) << std::endl;

    std::cout << "sizeof(Bad) struct: " << sizeof(Bad) << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
}


void GoodStructPractice()
{
    std::cout << "sizeof(long double): " << sizeof(long double) << std::endl;
    std::cout << "sizeof(double): " << sizeof(double) << std::endl;
    std::cout << "sizeof(long): " << sizeof(long) << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(char): " << sizeof(char) << std::endl;
    std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;

    std::cout << "sizeof(Good) struct: " << sizeof(Good) << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
}

#endif
