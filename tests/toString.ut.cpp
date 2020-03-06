#include <gtest/gtest.h>
#include "../arraylist.h"

TEST(all_tests, testToString){
    ArrayList al(5);

	for (int i = 1; i <= 5; ++i) {
		al.append(i);
	}

    EXPECT_EQ(al.toString(), "[1, 2, 3, 4, 5]");
}