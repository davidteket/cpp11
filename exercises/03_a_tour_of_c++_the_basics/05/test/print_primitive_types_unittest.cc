#include "gtest/gtest.h"
#include "print_primitive_types.h"

TEST(PrintPrimitiveTypes, IsValidOutput)
{
    EXPECT_EQ("1 \x86" "16535 3.141590 this is a string", PrintPrimitiveTypes());
}
