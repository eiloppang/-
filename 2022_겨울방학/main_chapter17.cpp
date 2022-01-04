#include <iostream>

using namespace std;

void doSomething(int x) {
	x = 123;
	cout << x << endl; 
}

int main() {
	int x = 0;

	cout << x << endl; // #1 result = 0

	/*	이 부분이 헷갈렸다. { } 중괄호 안에서는 x가 유효하다는 사실을 잊고 0이 나올 거라고 생각했다.
		하지만 doSomething 함수에 들어가면 x = 123 이므로 123이 출력돼야 한다. 
	*/
	doSomething(x);	// #2 result = 123

	cout << x << endl; // #3 result = 0

	return 0;
}