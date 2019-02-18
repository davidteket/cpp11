#include "gtest/gtest.h"

#include "c_cstr_concat.h"

TEST(CstrConcat, CanConcatenate)
{
    char* c1 = "lorem";
    char* c2 = "ipsum";

    char* actual = Exercise::cat(c1, c2);
    char* expected = "loremipsum";

    ASSERT_STREQ(expected, actual);
}
