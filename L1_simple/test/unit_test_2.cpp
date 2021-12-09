#include "demo.h"

#include "gtest/gtest.h"

using namespace std;

class demoTest : public ::testing::Test
{

protected:
    void SetUp() override
    {
        cout << "SetUp runs before each case." << endl;
    }

    void TearDown() override
    {
        cout << "TearDown runs after each case." << endl;
    }

    demo d;
};

TEST_F(demoTest, add)
{
    EXPECT_EQ(d.add(1, 1), 2);
    EXPECT_LT(d.add(1, 1), 3);
    ASSERT_EQ(d.add(1, 1), 2);
}

TEST_F(demoTest, multiply)
{
    demo d;
    ASSERT_FLOAT_EQ(d.multiply(1, 1), 1);
    EXPECT_NEAR(d.multiply(1, 1), 3, 0.001);
    EXPECT_FLOAT_EQ(d.multiply(1, 1), 1);
}

TEST_F(demoTest, greaterThan0)
{
    demo d;
    EXPECT_TRUE(d.greaterThan0(1));
    ASSERT_TRUE(d.greaterThan0(0.3));
}

TEST_F(demoTest, greaterThan0String)
{
    demo d;
    EXPECT_STREQ("True", d.greaterThan0String(1).c_str());
}

// int main(int argc, char **argv)
// {
//     ::testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }