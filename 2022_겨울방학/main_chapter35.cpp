#include <iostream>
#include <cmath>
using namespace std;

int main() {

	/*while (true) {

		int x, y;
		cin >> x >> y;
		cout << "Your input valuse are : " << x << " " << y << endl;

		if (x == y)
			cout << "equal" << endl;
		if (x != y)
			cout << "not equal" << endl;
		if (x > y)
			cout << "x is greater than y" << endl;
		if (x < y)
			cout << "x is less than y" << endl;
		if (x >= y)
			cout << "x is greater than y or equal to y" << endl;
		if (x <= y)
			cout << "x is less than or equal to y" << endl;
	}*/

	double d1(100 - 99.99);
	double d2(10 - 9.99);

	cout << std::abs(d1 - d2) << endl;

	const double epsilon = 1e-10;

	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;

	//if (d1 == d2)
	//	cout << "equal" << endl;
	//else {
	//	cout << "not equal" << endl;
	//	
	//	if (d1 > d2) cout << "d1 > d2" << endl;
	//	else // if (d1 < d2) because d1 != d2
	//		cout << "d1 < d2" << endl;
	//}

}