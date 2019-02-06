#include "gtest/gtest.h"

#include "number_of_characters_between_dereferenced_pointers.h"

#include <string>

TEST(DistanceBetweenPointers, WorksWithBothOnBeginning)
{
    std::string s = { "open interval count" };

    char* b = &s[0];
    char* e = &s[0];

    EXPECT_EQ(0, NumberOfCharactersBetweenDereferencedPointers(s, b, e));
}

TEST(DistanceBetweenPointers, WorksWithBothOnEnd)
{
    std::string s = { "open interval count" };

    char* b = &s[s.length() - 1];
    char* e = &s[s.length() - 1];

    EXPECT_EQ(0, NumberOfCharactersBetweenDereferencedPointers(s, b, e));
}

TEST(DistanceBetweenPointers, WorksWithNormalBeginNormalEnd)
{
    std::string s = { "open interval count" };

    char* b = &s[0];
    char* e = &s[s.length() - 1];

    EXPECT_EQ(17, NumberOfCharactersBetweenDereferencedPointers(s, b, e));
}

TEST(DistanceBetweenPointers, WorksWithRandomBeginRandomEnd)
{
    std::string s = { "open interval count" };

    char* b = &s[5];
    char* e = &s[8];

    EXPECT_EQ(2, NumberOfCharactersBetweenDereferencedPointers(s, b, e));
}

TEST(DistanceBetweenPointers, ReturnsZeroIfBeginGreaterThanEnd)
{
    std::string s = { "open interval count" };

    char* b = &s[8];
    char* e = &s[5];

    EXPECT_EQ(0, NumberOfCharactersBetweenDereferencedPointers(s, b, e));
}
