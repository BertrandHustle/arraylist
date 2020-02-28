#include <gtest/gtest.h>
#include "../arraylist.h"

TEST(all_tests, testAppend){
    ArrayList al(5);

    EXPECT_EQ(al.getSize(), 0);

    std::cout << al.arr[0] << std::endl;
    std::cout << al.arr[1] << std::endl;
    std::cout << al.arr[2] << std::endl;
    std::cout << al.arr[3] << std::endl;
    std::cout << al.arr[4] << std::endl;

    //std::cout << al.arr[0] << std::endl;
    al.append(777);

    std::cout << al.arr[0] << std::endl;
    std::cout << al.arr[1] << std::endl;
    std::cout << al.arr[2] << std::endl;
    std::cout << al.arr[3] << std::endl;
    std::cout << al.arr[4] << std::endl;

    //std::cout << al.getSize() << std::endl;
    //std::cout << al.arr[0] << std::endl;

    EXPECT_EQ(al.getSize(), 1);
    EXPECT_EQ(al.arr[0], 777);

    al.append(999);

    EXPECT_EQ(al.getSize(), 2);
    EXPECT_EQ(al.arr[1], 999);
    EXPECT_EQ(al.arr[0], 777);
}
