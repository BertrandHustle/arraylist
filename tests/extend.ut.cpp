#include <gtest/gtest.h>
#include "../arraylist.h"

TEST(all_tests, testAppend){
    ArrayList al(5);

    for (int i = 1; i <= 5; ++i){
        al.append(i);
    };

    EXPECT_EQ(al.getSize(), 5);

    al.append(6);

    EXPECT_EQ(al.getSize(), 10);
}