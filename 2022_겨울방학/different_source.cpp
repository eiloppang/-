#include <iostream>

void doSomething() {
	using namespace std; // 헤더파일 내에서 다 include 되는 경우가 있기 때문에 .h 파일 내에서는 중괄호 내에 하는 게 좋음
#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#endif
	// #else 도 사용 가능
#ifndef  LIKE_APPLE
	cout << "Oragne " << endl;
#endif // ! LIKE_APPLE
}