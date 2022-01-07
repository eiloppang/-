#include <iostream>
using namespace std;

int main() {
	// Decimal	: 0 1 2 3 4 5 6 7 8 9 10
	// Octal	: 0 1 2 3 4 5 6 7 10 11 12 13
	// Hexa		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	// 0011 1010 1111 1111
	// 3A7F

	int x = 012; // 8진수
	int y = 0xF; // 16진수
	int z = 0b1010;
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

	int numItems = 12;
	// 10 is magic number => change symbolic number 
	int price = numItems * 10;
}