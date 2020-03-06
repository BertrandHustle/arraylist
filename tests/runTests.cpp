
//g++ tests/runTests.cpp tests/capacity.ut.cpp arraylist.cpp -L/usr/lib -lgtest -lgtest_main -pthread
// use -g flag for ^^ on windows

#include <gtest/gtest.h>
int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
		return RUN_ALL_TESTS();
}

