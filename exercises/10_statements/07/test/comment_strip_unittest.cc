#include "gtest/gtest.h"

#include "comment_strip.h"

#include <iostream>

TEST(CommentStrip, CanHandleMultiline)
{
    std::cout << "Enter the following for the test in order (multi-line comments): " << std::endl;
    std::cout << "----------------------------------------------" << std::endl;

    // Test input requirements.
    //
    std::cout << "/* bla bla" <<std::endl;
    std::cout << " bla bla bla" << std::endl;
    std::cout << " bla */" << std::endl;

    ASSERT_EQ("", CommentStrip());
}

TEST(CommentStrip, CanHandleSingleline)
{
    std::cout << "Enter the following for the test in order (single-line comments): " << std::endl;
    std::cout << "----------------------------------------------" << std::endl;

    // Test input requirements.
    //
    std::cout << "int x = 3; // simple integer" << std::endl;
    std::cout << "// it assumes ..." << std::endl;

    EXPECT_EQ("int x = 3; ", CommentStrip());
}

TEST(CommentStrip, CanHandleLiterals)
{
    std::cout << "Enter the following for the test in order (comment tokens in literals): " << std::endl;
    std::cout << "----------------------------------------------" << std::endl;

    // Test input requirements.
    //
    std::cout << "char c1 = '//';" << std::endl;
    std::cout << " char c2 = '/*';" << std::endl;
    std::cout << " char c3 = '*/';" << std::endl;

    EXPECT_EQ("char c1 = '//'; char c2 = '/*'; char c3 = '*/';", CommentStrip());
}
