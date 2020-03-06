#include <gtest/gtest.h>
#include "../arraylist.h"

TEST(all_tests, testPrepend){
    ArrayList al(5);

    EXPECT_EQ(al.getSize(), 0);

    //std::cout << al.arr[0] << std::endl;
    al.prepend(777);

    //std::cout << al.getSize() << std::endl;
    std::cout << al.arr[0] << std::endl;

    EXPECT_EQ(al.getSize(), 1);
    EXPECT_EQ(al.arr[0], 777);

    al.prepend(999);

    std::cout << al.arr[0] << std::endl;
    std::cout << al.arr[1] << std::endl;

    EXPECT_EQ(al.getSize(), 2);
    EXPECT_EQ(al.arr[0], 999);
    EXPECT_EQ(al.arr[1], 777);

    al.prepend(1000);
    EXPECT_EQ(al.arr[0], 1000);
    EXPECT_EQ(al.arr[1], 999);
    EXPECT_EQ(al.arr[2], 777);
}
