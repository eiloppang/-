#include <iostream>
#include "MyConstance.h"
using namespace std;

/*	
	int g_x; // external linkage
	static int g_x; // internal linkage
	const int g_x; // X

	extern int g_z;
	extern const int g_z; // 다른 곳 어디선가 반드시 값 초기화

	int g_y(1);
	static int g_y(1); // 다른 cpp 파일에서 접근 불가능
	const int g_y(1); // 일반적 상수 선언 -> 같은 파일 안에서만 접근 가능

	extern int g_w(1); // 초기화 + 전역 변수 + 다른 cpp 파일 접근 가능 -> 다른 곳에서 초기화 불가능
	extern const int g_w(1); // 상수 + 외부 접근 가능

*/

int value = 123;

int a = 1;
void doSomething() {
	// int a = 1;
	static int a = 1;
	++a;
	cout << a << endl;
}

// forward declaration
extern void doSomething2();
extern int b;
int main() {

	cout << value << endl;

	int value = 1;

	cout << ::value << endl; // global scope operator
	cout << value << endl;

	doSomething2(); // 2
	cout << b << endl;

	doSomething(); // 2
	doSomething(); // 3
	doSomething(); // 4
	doSomething(); // 5

	cout << "In main cpp.file " << Constants::pi << " " << &Constants::pi << endl;

	return 0;
}