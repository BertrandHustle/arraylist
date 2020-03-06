#include <gtest/gtest.h>
#include "../arraylist.h"

TEST(all_tests, testCopy){
    ArrayList al1(5);
    ArrayList al2(5);

    al1.append(777);
    al1.append(999);
    al1.append(1000);

    al2.arr = al1.copy();

    EXPECT_EQ(al2.arr[0], 777);
    EXPECT_EQ(al2.arr[1], 999);
    EXPECT_EQ(al2.arr[2], 1000);

}
