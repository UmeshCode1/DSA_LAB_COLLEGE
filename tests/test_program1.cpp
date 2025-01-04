#include <gtest/gtest.h>

TEST(HelloWorldTest, BasicAssertions) {
    EXPECT_EQ(1 + 1, 2);
}

TEST(HelloWorldTest, AnotherAssertion) {
    EXPECT_TRUE(true);
}