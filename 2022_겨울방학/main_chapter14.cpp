#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

int main() {

	using namespace std;

	int x = 1024;
	double pi = 3.141592; // 2가 짤려서 나옴 -> 정밀도 문제

	cout << "I love this lecture!\n"; // << std::endl;
	cout << "x is " << x << " pi is " << pi << endl;

	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl;

	cout << "\a";
	// printf("I love this lecture!\n");

	int y = 1;
	cout << "Before your input, y was " << y << endl;
	// 큰 숫자를 입력했을 때, 2147483647가 나옴 (우연히 나온 숫자가 아니다)
	cin >> y;

	cout << "Your input is " << y << endl;

	return 0;

}