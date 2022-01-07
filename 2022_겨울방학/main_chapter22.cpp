#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main() {
	short	s = 1; // 2 bytes = 2 * 8 bits = 16 bits. max value 32767
	int		i = 1; // 4 bytes = 4 * 8 bits = 32 bits.
	long	l = 1;
	long long	ll = 1;

	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;

	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;

	// short
	s = 32767;
	s += 1; // 32768
	cout << s << endl; // overflow

	s = std::numeric_limits<short>::min();
	cout << "min() " << s << endl;
	s = s - 1;
	cout << " " << s << endl; // overflow

	// int
	cout << std::pow(2, sizeof(int) * 8 - 1) - 1 << endl;
	cout << std::numeric_limits<int>::max() << endl;
	cout << std::numeric_limits<int>::min() << endl;
	cout << std::numeric_limits<int>::lowest() << endl;

	i = 2147483647;
	i += 1; // 2147483648
	cout << i << endl; // -2147483648

	unsigned int ui = -1;
	cout << ui << endl; // error
}
