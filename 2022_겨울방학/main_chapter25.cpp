#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
using namespace std;

int main() {
	//float f(3.14); // 3.14 = 31.4 * 0.1

	//cout << 3.14 << endl;
	//cout << 31.4e-1 << endl;
	//cout << 31.4e-2 << endl;
	//cout << 31.4e1 << endl;
	//cout << 31.4e2 << endl;


	//double d(3.141592);
	//long double ld(3.141592);

	//cout << sizeof(f) << endl;
	//cout << sizeof(d) << endl;
	//cout << sizeof(ld) << endl;

	//cout << numeric_limits<float>::max() << endl;
	//cout << numeric_limits<double>::max() << endl;
	//cout << numeric_limits<long double>::max() << endl;

	//// 양수 출력 -> 최솟값의 절댓값 표현
	//cout << numeric_limits<float>::min() << endl;
	//cout << numeric_limits<double>::min() << endl;
	//cout << numeric_limits<long double>::min() << endl;

	//cout << numeric_limits<float>::lowest() << endl;
	//cout << numeric_limits<double>::lowest() << endl;
	//cout << numeric_limits<long double>::lowest() << endl;

	//float f2(123456789.0f); // 10 significant digits

	//cout << std::setprecision(9);
	//cout << f2 << endl;

	double d2(0.1);

	cout << d2 << endl;
	cout << std::setprecision(17); // 0.1에 가장 가까운 수
	cout << d2 << endl;

	double d3(1.0);
	double d4(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	
	cout << std::setprecision(17);
	cout << d3 << endl;
	cout << d4 << endl; // 오차 누적

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << " " << std::isnan(posinf) << endl;
	cout << posinf << " " << std::isinf(posinf) << endl;
	cout << neginf << " " << std::isnan(neginf) << endl;
	cout << neginf << " " << std::isinf(neginf) << endl;
	cout << nan << " " << std::isnan(nan) << endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;

}