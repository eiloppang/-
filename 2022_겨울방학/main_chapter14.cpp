#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

int main() {

	using namespace std;

	int x = 1024;
	double pi = 3.141592; // 2�� ©���� ���� -> ���е� ����

	cout << "I love this lecture!\n"; // << std::endl;
	cout << "x is " << x << " pi is " << pi << endl;

	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl;

	cout << "\a";
	// printf("I love this lecture!\n");

	int y = 1;
	cout << "Before your input, y was " << y << endl;
	// ū ���ڸ� �Է����� ��, 2147483647�� ���� (�쿬�� ���� ���ڰ� �ƴϴ�)
	cin >> y;

	cout << "Your input is " << y << endl;

	return 0;

}