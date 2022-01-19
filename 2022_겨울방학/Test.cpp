#include <iostream>
#include "MyConstance.h"
extern int b = 1;

void doSomething2() {
	using namespace std;
	// cout << "Hello" << endl;
	cout << "In test cpp.file " << Constants::pi << " " << &Constants::pi << endl;
}