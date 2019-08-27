#include <gtest/gtest.h>

#include "power-recursion.h"

namespace {
    TEST(PowerRecursionTest, ExponentIsOne) {
        EXPECT_EQ(1, power(1, 1));
        EXPECT_EQ(2, power(2, 1));
        EXPECT_EQ(1378, power(1378, 1));
        EXPECT_EQ(256, power(256, 1));
    }

    TEST(PowerRecursionTest, ExponentIsZero) {
        EXPECT_EQ(1, power(1, 0));
        EXPECT_EQ(1, power(2, 0));
        EXPECT_EQ(1, power(1378, 0));
        EXPECT_EQ(1, power(256, 0));
    }

    TEST(PowerRecursionTest, ExponentIsRandom) {
        EXPECT_EQ(1, power(1, 1));
        EXPECT_EQ(1024, power(2, 10));
        EXPECT_EQ(1898884, power(1378, 2));
        EXPECT_EQ(16777216, power(256, 3));
    }
}