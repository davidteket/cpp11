#include <vector>

#include "gtest/gtest.h"

#include "vector_sort_print.h"

TEST(VectorSortPrint, IsUnsorted)
{
    std::vector<int> test = { 5, 9, -1, 200, 0 };
    EXPECT_EQ("{ 5 9 -1 200 0 }", VectorUnsorted(test));
}

TEST(VectorSortPrint, IsSorted)
{
    std::vector<int> test = { 5, 9, -1, 200, 0 };
    EXPECT_EQ("{ -1 0 5 9 200 }", VectorSorted(test));
}
