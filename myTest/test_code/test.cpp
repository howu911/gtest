#include <iostream>
#include "gtest/gtest.h"
#include "func.h"

TEST(AddTest, add)
{
    ASSERT_EQ(4, add(3,1));
}




