#include <gtest/gtest.h>
#include "../arraylist.h"

TEST(all_tests, testAppend){
    ArrayList al(5);
    EXPECT_EQ(al.capacity(), 5);
}
