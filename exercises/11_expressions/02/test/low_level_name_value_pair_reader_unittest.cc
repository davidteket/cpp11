#include "low_level_name_value_pair_reader.h"

#include "gtest/gtest.h"

#include <string>
#include <vector>
#include <map>
#include <iostream>

TEST(ReadPairs, CanAssignMultipleValuesToTheSameName)
{
    std::cout << "enter the following for the test (or CTRL+SHIFT+C -> CTRL+SHIFT+V each line on the terminal): " << std::endl;

    std::cout << "lorem 1.234 ipsum 345 lorem 6789.1011" << std::endl;
    std::cout << "quick 334455 brown 444 quick 11 quick 22" << std::endl << std::endl;

    auto p = Pair();
    p.Read();
    std::map<std::string, std::vector<float>> actual = p.GetInput();

    ASSERT_EQ(4, actual.size());
    ASSERT_EQ(2, actual["lorem"].size());
    ASSERT_EQ(1, actual["ipsum"].size());
    ASSERT_EQ(3, actual["quick"].size());

    EXPECT_FLOAT_EQ(1.234, *(actual["lorem"].begin()));
    EXPECT_FLOAT_EQ(6789.1011, *(actual["lorem"].end() - 1));
    EXPECT_FLOAT_EQ(334455, *(actual["quick"].begin()));
}

TEST(ReadPairs, CanSumForAllName)
{
    std::cout << "enter the following for the test (or CTRL+SHIFT+C -> CTRL+SHIFT+V each line on the terminal): " << std::endl;

    std::cout << "lorem 1.2 ipsum 2.4 lorem 6.8" << std::endl;
    std::cout << "quick 33 brown 45 quick 50 quick 22" << std::endl << std::endl;

    auto p = Pair();
    p.Read();

    EXPECT_FLOAT_EQ(160.39999, p.SumForAllName());
}

TEST(ReadPairs, CanSumForEachName)
{
    std::cout << "enter the following for the test (or CTRL+SHIFT+C -> CTRL+SHIFT+V each line on the terminal): " << std::endl;

    std::cout << "lorem 1.2 ipsum 2.4 lorem 6.8" << std::endl;
    std::cout << "quick 33 brown 45 quick 50 quick 22" << std::endl << std::endl;

    auto p = Pair();
    p.Read();
    std::map<std::string, float> actual = p.SumForEachName();

    ASSERT_EQ(105, actual["quick"]);
}

TEST (ReadPairs, MeanForEachName)
{
    std::cout << "enter the following for the test (or CTRL+SHIFT+C -> CTRL+SHIFT+V each line on the terminal): " << std::endl;

    std::cout << "lorem 1.2 ipsum 2.4 lorem 6.8" << std::endl;
    std::cout << "quick 33 brown 45 quick 50 quick 22" << std::endl << std::endl;

    auto p = Pair();
    p.Read();

    std::map<std::string, float> actual = p.MeanForEachName();

    EXPECT_FLOAT_EQ(8.00, actual["lorem"]);
}

TEST (ReadPairs, CanSumAll)
{
    std::cout << "enter the following for the test (or CTRL+SHIFT+C -> CTRL+SHIFT+V each line on the terminal): " << std::endl;

    std::cout << "quick 33 brown 45 quick 50 quick 22" << std::endl << std::endl;

    auto p = Pair();
    p.Read();

    float actual = p.SumForAllName();

    EXPECT_EQ(150, actual);
}
