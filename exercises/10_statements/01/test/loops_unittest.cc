#include "loops.h"

#include "gtest/gtest.h"

#include <vector>

TEST(Loops, AllLoopsAreEquivalent)
{
    std::vector<int> v = Loops();
    ASSERT_EQ(5, v.size());

    for (e : v)
      ASSERT_EQ(4, e);      
}
