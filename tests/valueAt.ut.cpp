#include <gtest/gtest.h>
#include "../arraylist.h"

TEST(all_tests, testAppend){
    ArrayList al(5);

    for (int i = 1; i <= 5; ++i){
        al.append(i);
    };

    EXPECT_EQ(al.valueAt(2), 3);
}