#include <iostream>

int main()
{
	int* x = new int[10];

	for (int i = 0; i < 10; ++i) {
		x[i] = i;
	}

	for (int i = 0; i < 10; ++i) {
		std::cout << x[i] << std::endl;
	}

	delete [] x;

	return 0;
}

