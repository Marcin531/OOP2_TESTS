#include <gtest/gtest.h>
#include "add.h"

TEST(AddTestsFirst,Adding){
    ASSERT_EQ(add(1,1),2);
    ASSERT_EQ(add(1,2),3);
    ASSERT_EQ(add(5,5),10);
}

TEST(AddTestsSecond,Adding){
    ASSERT_EQ(add(8,4),12);
    ASSERT_EQ(add(7,2),9);
    ASSERT_EQ(add(2,9),11);
}
TEST(AdTestsThird,Adding){
    ASSERT_EQ(add(80,3),83);
    ASSERT_EQ(add(5,2),7);
    ASSERT_EQ(add(3,6),9);
}

TEST(AddTestsWithMistake,Adding){
    ASSERT_EQ(add(3,3),7);
    ASSERT_EQ(add(1,2),3);
    ASSERT_EQ(add(5,8),13);
}
