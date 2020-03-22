#include <gtest/gtest.h>
#include "../arraylist.h"

TEST(all_tests, testInsert){
    ArrayList al(5);

    for (int i = 1; i <= 5; ++i){
        al.append(i);
    };

    al.remove(2);

    EXPECT_EQ(al.toString(), "[1, 2, 4, 5]");
}