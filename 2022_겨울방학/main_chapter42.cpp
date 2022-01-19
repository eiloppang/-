#include <iostream>
#include "MyConstance.h"
using namespace std;

/*	
	int g_x; // external linkage
	static int g_x; // internal linkage
	const int g_x; // X

	extern int g_z;
	extern const int g_z; // �ٸ� �� ��𼱰� �ݵ�� �� �ʱ�ȭ

	int g_y(1);
	static int g_y(1); // �ٸ� cpp ���Ͽ��� ���� �Ұ���
	const int g_y(1); // �Ϲ��� ��� ���� -> ���� ���� �ȿ����� ���� ����

	extern int g_w(1); // �ʱ�ȭ + ���� ���� + �ٸ� cpp ���� ���� ���� -> �ٸ� ������ �ʱ�ȭ �Ұ���
	extern const int g_w(1); // ��� + �ܺ� ���� ����

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