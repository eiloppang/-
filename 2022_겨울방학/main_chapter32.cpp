#include <iostream>
using namespace std;

int main() {

	int x = 7;
	int y = 4;

	cout << x / y << endl;
	cout << float(x) / y << endl;
	cout << x / float(y) << endl;
	cout << float(x) / float(y) << endl;

	int z = x;
	z += y; // z = z + y;

	return 0;
}