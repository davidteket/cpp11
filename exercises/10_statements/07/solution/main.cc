#include "comment_strip.h"

#include <iostream>

int main()
{
    std::cout << "Comment Strip program. Enter the C++ source code (with single line comments, multi line comments and literals containing comment tokens): " << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << CommentStrip() << std::endl;
}
