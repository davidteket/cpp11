#include <vector>
#include <string>

#include "gtest/gtest.h"

#include "string_vector_sort_print.h"

TEST(VectorSortPrint, IsUnsorted)
{
    std::vector<std::string> test = { "Kant", "Plato", "Aristotle", "Kierkegard", "Hume" };
    EXPECT_EQ("{ Kant Plato Aristotle Kierkegard Hume }", VectorUnsorted(test));
}

TEST(VectorSortPrint, IsSorted)
{
    std::vector<std::string> test = { "Kant", "Plato", "Aristotle", "Kierkegard", "Hume" };
    EXPECT_EQ("{ Aristotle Hume Kant Kierkegard Plato }", VectorSorted(test));
}
