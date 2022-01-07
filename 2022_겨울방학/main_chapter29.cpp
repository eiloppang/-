#include <iostream>
using namespace std;

void printNumber(const int myNumber) {
	cout << myNumber << endl;
}

int main() {
	printNumber(123);
	const double gravity{ 9.8 }; // complie time variable

	int number;
	cin >> number;

	constexpr int myConst(123); 
	const int specialNumber(number); // run time variable

	const int pricePreItem = 30;
	int numItems = 123;
	// int price = numItems * 30;
	int price = numItems * pricePreItem;



	
}