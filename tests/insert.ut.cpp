#include <gtest/gtest.h>
#include "../arraylist.h"

TEST(all_tests, testInsert){
    ArrayList al(5);

    for (int i = 1; i <= 5; ++i){
        al.append(i);
    };

    al.insert(3, 777);

    EXPECT_EQ(al.toString(), "[1, 2, 3, 777, 4, 5]");
}