#include "gtest/gtest.h"

#include "rev.h"

TEST(ReverseString, CanReverse)
{
    char* c = "fdsa";
    char* d = Exercise::rev(c);

    ASSERT_STREQ("asdf", d);
}
