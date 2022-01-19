#include <iostream>

// template -> next

auto add(int x, int y) -> int {
	return x + (double)y;
}

int main() {
	using namespace std;
	
	auto a = 123;
	auto d = 123.0;
	auto c = 1 + 2;
	
	auto result = add(1, 2);
}