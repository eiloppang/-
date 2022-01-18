#include <iostream>
using namespace std;

int main() {
	// logical NOT
	bool x = true;
	cout << !x << endl;

	// logical AND
	bool y = true;
	bool z = false;
	cout << (x && y) << endl;

	// logical OR
	cout << (x || y) << endl;

	int a = 5;
	int b = 7;

	// !a == b <=> (!a)=b
	if (a != b) {
		cout << "x does not equal y" << endl;
	}
	else
		cout << "x equals y" << endl;

	int v = 1;
	if (v == 0 || v == 1)
		cout << "v is 0 or 1" << endl;

	// short circuit evaluation
	int n = 1;
	int m = 2;

	if (n == 1 && m++ == 2) {
		// do something
		// n = 2 -> m = 2 [ Why? : && evaluation predence ]
	}

	cout << m << endl;

	// De Morgan's Law
	!(x && y);
	!x || !y;

	// XOR
	/*	false false false
		false true true
		true false true
		true true false

		bool x = true;
		bool y = false;

		// using
		if(x != y){

		}
	*/ 

	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3;
	bool r2 = (v1 || v2) && v3;
	bool r3 = v1 || (v2 && v3);

	cout << r1 << endl; // 1
	cout << r2 << endl; // 0


	
}