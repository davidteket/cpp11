#ifndef _NAME_AGE_
#define _NAME_AGE_

#include <string>
#include <iostream>

std::string NameAge()
{
    std::string name = std::string();
    int age;

    std::cout << "Enter your name: "; getline(std::cin, name);
    std::cout << "Enter your age: "; std::cin >> age;

    return "{ Name: " + name + ", Age: " + std::to_string(age) + " }";
}

#endif
