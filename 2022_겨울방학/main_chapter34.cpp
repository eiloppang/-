#include <iostream>
using namespace std;

int getPrice(bool onSale) {
	if (onSale)
		return 10;
	else
		return 100;
}

int main() {

	// sizeof

	float a;

	cout << sizeof(float) << endl;
	cout << sizeof(a) << endl;

	// comma operator

	int x = 3;
	int y = 10;
	int z = (++x, ++y);

	cout << x << " " << y << " " << z << endl;

	int n = 1, b = 10;
	int z1;

	z1 = (n, n + b);
	cout << z1 << endl;

	// conditional operator (arithmetric if)

	bool onSale = true;

	// const int price = (onSale == true) ? 10 : 100;
	const int price = getPrice(onSale);
	/*if (onSale)
		price = 10;
	else
		price = 100;*/

	cout << price << endl;



}