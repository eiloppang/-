#include <iostream>

void doSomething() {
	using namespace std; // ������� ������ �� include �Ǵ� ��찡 �ֱ� ������ .h ���� �������� �߰�ȣ ���� �ϴ� �� ����
#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#endif
	// #else �� ��� ����
#ifndef  LIKE_APPLE
	cout << "Oragne " << endl;
#endif // ! LIKE_APPLE
}