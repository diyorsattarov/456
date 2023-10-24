#include <iostream>
#include <boost/version.hpp>
#include <gtest/gtest.h>

TEST(BoostVersionTest, CheckBoostVersion) {
    EXPECT_EQ(BOOST_VERSION / 100000, 1);
    EXPECT_EQ(BOOST_VERSION / 100 % 1000, 74);
}