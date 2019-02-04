#include "gtest/gtest.h"

#include "ascii_printer.h"

TEST(ToHex, IsDecToHexConversionValid)
{
    EXPECT_EQ("0x7DA0", ToHex(32160));

}
