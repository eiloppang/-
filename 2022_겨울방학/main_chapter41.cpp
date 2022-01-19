#include <iostream>
using namespace std;

namespace work1{

	int a = 1;
	void doSomething() {
		a += 3;
	}
}

namespace work2 {
	int a = 2;
	void doSomething() {
		a += 5;
	}
}

int main() {
	int apple = 5;
	cout << apple << endl;
	{
		apple = 1;
		cout << apple << endl;
	}
	cout << apple << endl;

	work1::a;
	work1::doSomething();

	work2::a;
	work2::doSomething();
}