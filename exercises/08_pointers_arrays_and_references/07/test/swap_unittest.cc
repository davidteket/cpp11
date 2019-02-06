#include "gtest/gtest.h"

#include "swap.h"

TEST(SwapsByReference, CanSwap)
{
    int x = 3;
    int y = 6;

    Swap(x, y);

    EXPECT_EQ(6, x);
    EXPECT_EQ(3, y);
}

TEST(SwapsByPointer, CanSwap)
{
    int x = 3;
    int y = 6;

    Swap(&x, &y);

    EXPECT_EQ(6, x);
    EXPECT_EQ(3, y);
}
