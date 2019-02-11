#include "atoi.h"

#include "gtest/gtest.h"

TEST(StringToDecimalInteger, IsValidConversion)
{
    // hex
    ASSERT_EQ(1980, Conversions::atoi("0x7BC"));
    ASSERT_EQ(1980, Conversions::atoi("0X7BC"));

    // oct
    ASSERT_EQ(1980, Conversions::atoi("03674"));

    // dec
    ASSERT_EQ(1980, Conversions::atoi("1980"));
}
