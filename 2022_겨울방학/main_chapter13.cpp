#include <iostream>

int main() {
	int x = 123; // initialization
	//x = 123; // assignment
	std::cout << x << std::endl;


	/*
		int x = 1;
		x = x + 2;
		std::cout << x << std::endl; // #1 result = 3

		int y = x;
		std::cout << y << std::endl; // #2 result = 3

		std::cout << x + y << std::endl; // #3 result = 6

		std::cout << x << std::endl; // #4 result = 3

		int z;
		std::cout << z << std::endl; // #5 result = runtime error
	*/
	return 0;
}