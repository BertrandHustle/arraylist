#include <gtest/gtest.h>
#include "../arraylist.h"
#include <iostream>


TEST(all_tests, testCapacity){
    ArrayList al(5);
    EXPECT_EQ(al.capacity(), 5);
}