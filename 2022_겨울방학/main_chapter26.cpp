#include <iostream>
using namespace std;

bool isEqual(int a, int b) {
	bool result = (a == b);
	return result;
}

// A program that determines whether a number is even or odd
int isOdd(int x) {
	if (x % 2 == 0) return true;
	else return false;
}

int main() {
	bool b1 = true; // copy initialization
	bool b2(false); // direct
	bool b3{ true }; // uniform
	b3 = false;

	cout << std::boolalpha;
//	cout << b3 << endl;
//	cout << b1 << endl;
//	cout << !true << endl;
//	cout << !false << endl;
	cout << (true && true) << endl;
	cout << (true && false) << endl;
	cout << (false && true) << endl;
	cout << (false && false) << endl;
	cout << (true || true) << endl;
	cout << (true || false) << endl;
	cout << (false || true) << endl;
	cout << (false || false) << endl;

	// if : 조건에 따라서 실행 여부 결정
	if (false)
		cout << "This is true " << endl;
	else
		cout << "This is false " << endl;

	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 3) << endl;

	// false라고 input하면 true가 나옴. 이런 코딩은 피하자!
	/*bool b;
	cin >> b;
	cout << "Your input : " << b << endl;*/

	int inputItem;
	cout << "< A program that determines whether a number is even or odd > (true : 1 / false : 0)" << endl << "Your Input : ";
	cin >> inputItem;
	cout << "result : " << isOdd(inputItem) << endl;
}