#include <iostream>
#include <algorithm>
using namespace std;

#define MY_NUMBER 9
// #define MAX(a, b) (((a) > (b)) ? a : b)
#define LIKE_APPLE // 이 파일 내에서만 효력 유효

void doSomething();

int main() {
	cout << MY_NUMBER << endl;
	// cout << MAX(1, 2) << endl;
	cout << std::max(1 + 3, 2) << endl;

	doSomething(); // orange가 출력

}