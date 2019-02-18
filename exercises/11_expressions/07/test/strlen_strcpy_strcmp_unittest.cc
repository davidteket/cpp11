#include "strlen_strcpy_strcmp.h"

#include "gtest/gtest.h"

TEST(strlen, CanProvideLength)
{
    char* c = "lorem ipsum";

    ASSERT_EQ(11, MyCstrFunctions::strlen(c));
}

TEST(strcpy, CanCopy)
{
    char* c1 = "lorem ipsum";
    char* c2;
    c2 = MyCstrFunctions::strcpy(c1, c2, MyCstrFunctions::strlen(c1));

    ASSERT_STREQ(c1, c2);
}

TEST(strcmp, CanCompare)
{
    char* c1 = "ASDF";
    char* c2 = "AGCX";
    char* c3 = "AGDX";
    char* c4 = "ASDF";

    ASSERT_EQ(0, MyCstrFunctions::strcmp(c4, c1));
    ASSERT_EQ(1, MyCstrFunctions::strcmp(c2, c1));
    ASSERT_EQ(-1, MyCstrFunctions::strcmp(c3, c2));
}
