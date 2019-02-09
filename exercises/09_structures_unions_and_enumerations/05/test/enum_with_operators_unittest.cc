#include "gtest/gtest.h"

#include "enum_with_operators.h"

#include <string>

TEST(SeasonOperations, IsValidResult)
{
    // ++
    //
    Season s1 = Season::spring;
    Season s2 = Season::winter;

    ASSERT_EQ(2, static_cast<int>(++s1));
    ASSERT_EQ(1, static_cast<int>(++s2));

    // --
    //
    Season s3 = Season::summer;
    Season s4 = Season::spring;

    ASSERT_EQ(1, static_cast<int>(--s3));
    ASSERT_EQ(4, static_cast<int>(--s4));


    // >>
    //
    Season s5 = Season::summer;
    Season s6 = Season::autumn;

    std::string x1 = "Summer";
    std::string x2 = "Autumn";

    ASSERT_EQ(2, static_cast<int>(x1 >> s5));
    ASSERT_EQ(3, static_cast<int>(x2 >> s6));

    // <<
    //
    Season s7 = Season::summer;
    Season s8 = Season::autumn;

    std::string x3 = {};
    std::string x4 = {};

    x3 = x3 << s7;
    x4 = x4 << s8;

    ASSERT_EQ("Summer", x3);
    ASSERT_EQ("Autumn", x4);
}

TEST(SwitchLanguage, CanSwitchLanguage)
{
    Language l1 = Language::hu;
    SwitchLanguage(l1);
    PrintSeasons();

    Language l2 = Language::en;
    SwitchLanguage(l2);
    PrintSeasons();
}
