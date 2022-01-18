#include <iostream>
#include <bitset>
using namespace std;

int main() {
	// << left shift
	// >>
	// ~, &, |, ^

	unsigned int a = 3;

	cout << std::bitset<8>(a) << endl;

	cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;
	cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
	cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
	cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;


	unsigned int b = 1024;

	cout << std::bitset<16>(b) << endl;

	cout << std::bitset<16>(b >> 1) << " " << (b >> 1) << endl;
	cout << std::bitset<16>(b >> 2) << " " << (b >> 2) << endl;
	cout << std::bitset<16>(b >> 3) << " " << (b >> 3) << endl;
	cout << std::bitset<16>(b >> 4) << " " << (b >> 4) << endl;

	cout << std::bitset<16>(~b) << " " << (~a) << endl;

	unsigned int n = 0b1100;
	unsigned int m = 0b0110;

	cout << std::bitset<4>(n & m) << endl; // bitwise AND
	cout << std::bitset<4>(n | m) << endl; // bitwise OR
	cout << std::bitset<4>(n ^ m) << endl; // bitwise XOR

	// Quiz
	// 1. 0110 >> 2 -> decimal
	unsigned int z = 0b0110;
	cout << std::bitset<4>(z >> 2) << " " << (z >> 2) << endl;

	// 2. 5 | 12 / 5 & 12 / 5 ^ 12
	cout << std::bitset<4>(5 | 12) << endl;
	cout << std::bitset<4>(5 & 12) << endl;
	cout << std::bitset<4>(5 ^ 12) << endl;
}