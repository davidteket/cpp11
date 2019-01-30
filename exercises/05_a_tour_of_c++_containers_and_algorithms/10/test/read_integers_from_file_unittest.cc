#include <string>
#include <iostream>
#include <fstream>

#include "gtest/gtest.h"

#include "read_integers_from_file.h"

TEST(ReadIntegersFromFile, IsValidInput)
{
    std::string input = ReadIntegersFromFile();

    std::string first = std::string();
    first += input[0];

    std::string last = std::string();
    last += input[input.length() - 4];
    last += input[input.length() - 3];
    last += input[input.length() - 2];
    last += input[input.length() - 1];

    EXPECT_EQ("0", first);
    EXPECT_EQ("999 ", last);
}
