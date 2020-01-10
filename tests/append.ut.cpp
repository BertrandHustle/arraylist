#include <gtest/gtest.h>
#include "../arraylist.h"

TEST(all_tests, testAppend){
    ArrayList al(5);

    int testVal = 777;
    al.append(testVal);

    std::cout << al.arr[0] << std::endl;
    std::cout << al.getSize() << std::endl;

    EXPECT_EQ(al.getSize(), 1);
    EXPECT_EQ(al.arr[al.getSize()-1], 777);
}
