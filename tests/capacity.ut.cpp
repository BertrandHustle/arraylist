#include <gtest/gtest.h>
#include "../arraylist.h"

//g++ tests/runTests.cpp tests/capacity.ut.cpp arraylist.cpp -L/usr/lib -lgtest -lgtest_main -pthread

TEST(all_tests, testCapacity){
    ArrayList al(5);
    EXPECT_EQ(al.capacity(), 5);
}
