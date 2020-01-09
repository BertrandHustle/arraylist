#include <gtest/gtest.h>
#include "../arraylist.h"

TEST(all_tests, testAppend){
    ArrayList al(5);

    for (int i = 0; i < al.capacity(); ++i) {
		al.arr[i] = i;
        std::cout << al.arr[i] << std::endl;
	}

    al.arr[4] = 10;

    EXPECT_EQ(al.arr[al.capacity()-1], 10);

    int testVal = 777;
    al.append(testVal);

    EXPECT_EQ(al.arr[al.capacity()-1], 777);
    EXPECT_EQ(al.capacity(), 6);
    
    for (int i = 0; i < al.capacity(); ++i) {
        std::cout << al.arr[i] << std::endl;
	}
}
