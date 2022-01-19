#include <iostream>
#include <typeinfo>

int main() {
	using namespace std;

	float a = 1.0f;
	double d = a; // numeric promotion

	// numeric conversion
	/*double d = 3;
	short s = 2;*/
	int i = 30000;
	char c = i;
	cout << static_cast<int>(c) << endl; // result : 48
	
	// int a = 123;
	cout << typeid(a).name() << endl;

	cout << 5u - 10u; // 이상한 값 나옴 -> unsigned는 unsigned로 저장되기 때문.
	// precedence
	// int, unsigned int, long, unsinged long, long long, unsigned long long, float, double, long double

	int i = static_cast<int>(4.0);
}