#include <iostream>

using namespace std;

void doSomething(int x) {
	x = 123;
	cout << x << endl; 
}

int main() {
	int x = 0;

	cout << x << endl; // #1 result = 0

	/*	�� �κ��� �򰥷ȴ�. { } �߰�ȣ �ȿ����� x�� ��ȿ�ϴٴ� ����� �ذ� 0�� ���� �Ŷ�� �����ߴ�.
		������ doSomething �Լ��� ���� x = 123 �̹Ƿ� 123�� ��µž� �Ѵ�. 
	*/
	doSomething(x);	// #2 result = 123

	cout << x << endl; // #3 result = 0

	return 0;
}