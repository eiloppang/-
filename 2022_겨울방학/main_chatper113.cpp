#include <iostream>

namespace MySpace {

	namespace InnerSpace {
		int myFunction() {
			return 0;
		}
	}
	int doSomething(int a, int b) {
		return a + b;
	}
}

namespace MySpace2 {
	int doSomething(int a, int b) {
		return a * b;
	}
}


using namespace std;

int main() {

	using namespace MySpace::InnerSpace;

	myFunction();
	
	//cout << MySpace::doSomething(3, 4) << endl; // #result = 7
	//cout << doSomething(3, 4) << endl; // #result = 12

	return 0;
}