#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int main() {
	int x = 6, y = 6;
	cout << x << " " << y << endl;
	cout << ++x << " " << --y << endl;
	cout << x << " " << y << endl;
	cout << x++ << " " << y-- << endl;
	cout << x << " " << y << endl;

	int a = 1, b = 2;
	int v = add(a, ++b); // do not use

	cout << v << endl;

	int n = 1;
	n = n++;

	cout << n << endl;
}