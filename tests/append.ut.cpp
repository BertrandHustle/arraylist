#include <gtest/gtest.h>
#include "../arraylist.h"

TEST(all_tests, testAppend){
    ArrayList al(5);

    int testVal = 777;
    al.append(testVal);

    //std::cout << al.getSize() << std::endl;
    //std::cout << al.arr[0] << std::endl;

    EXPECT_EQ(al.getSize(), 1);
    EXPECT_EQ(al.arr[al.getSize()-1], 777);

    int testVal2 = 999;
    al.append(testVal2);

    std::cout << al.getSize() << std::endl;
    std::cout << al.arr[1] << std::endl;

    EXPECT_EQ(al.getSize(), 2);
    EXPECT_EQ(al.arr[al.getSize()-1], 999);
    EXPECT_EQ(al.arr[0], 777);
}
