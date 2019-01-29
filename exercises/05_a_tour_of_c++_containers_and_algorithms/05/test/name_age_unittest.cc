#include "gtest/gtest.h"

#include "name_age.h"

TEST(NameAge, IsCorrectFormat)
{
    EXPECT_EQ("{ Name: David Teket, Age: 27 }", NameAge());
}
