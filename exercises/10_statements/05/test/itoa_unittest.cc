#include "gtest/gtest.h"

#include "itoa.h"

TEST(StringToDecimalNumberConversion, IsValidConversion)
{
    const int n = 5;
    char str[n];

    itoa(12345, str, n);

    ASSERT_STREQ("12345", str);
}
