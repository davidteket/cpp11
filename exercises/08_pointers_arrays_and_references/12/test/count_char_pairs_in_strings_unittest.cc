#include "gtest/gtest.h"

#include "count_char_pairs_in_strings.h"

#include <string>

TEST(CountCharPairsInString, IsValidOutput)
{
    auto str = std::string("xabaacbaxabb");
    auto p1 = std::string("ab");

    EXPECT_EQ(2, CountCharPairsInString(p1, str));
}

TEST(CountCharPairsInCstyleString, IsValidOutput)
{
    char* cstr = {"xabaacbaxabb\0"};
    char* cp2 = {"ab\0"};

    EXPECT_EQ(2, CountCharPairsInCstyleString(cp2, cstr));
}
