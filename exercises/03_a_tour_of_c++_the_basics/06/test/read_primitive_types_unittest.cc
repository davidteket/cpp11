#include <string>

#include "gtest/gtest.h"
#include "read_primitive_types.h"

TEST(ReadPrimitiveTypes, CanReadAll)
{
    EXPECT_EQ("1 \x98" "123 3.141595 testing", ReadPrimitiveTypes());
}
