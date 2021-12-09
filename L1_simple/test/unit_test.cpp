#include "demo.h"

#include "gtest/gtest.h"

using namespace std;

TEST(demo, add)
{
    demo d;
    EXPECT_EQ(d.add(1, 1), 2);
    EXPECT_LT(d.add(1, 1), 3);
    ASSERT_EQ(d.add(1, 1), 2);
}

TEST(demo, multiply)
{
    demo d;
    ASSERT_FLOAT_EQ(d.multiply(1, 1), 1);
    EXPECT_NEAR(d.multiply(1, 1), 3, 0.001);
    EXPECT_FLOAT_EQ(d.multiply(1, 1), 1);
}

TEST(demo, greaterThan0)
{
    demo d;
    EXPECT_TRUE(d.greaterThan0(1));
    ASSERT_TRUE(d.greaterThan0(0.3));
}

TEST(demo, greaterThan0String)
{
    demo d;
    EXPECT_STREQ("True", d.greaterThan0String(1).c_str());
}
