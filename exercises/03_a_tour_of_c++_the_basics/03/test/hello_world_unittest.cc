#include "hello_world.h"
#include "gtest/gtest.h"

TEST(HelloWorldTest, RightMessage)
{
    EXPECT_EQ("Hello, World!", HelloWorld());
}

TEST(BadHelloWorldTest, BadMessage)
{
    EXPECT_EQ("Hello, World!", BadHelloWorld());
}
