#include <iostream>

using namespace std;


void print() {
	cout << "Hello!" << endl;
}

int AddTwoNumbers(int numA, int numB) {

	// int sum = numA + numB;
	int sum = numA + numB;

	return sum;
}

int multiplyTwoNumbers(int numA, int numB) {
	
	// int sum = numA + numB;
	int sum = numA * numB;
	//print();

	return sum;
}

void printHelloWorld() {
	cout << "Hello World!" << endl;

	return;

	// 실행 X (return 뒤에는 실행이 안 됨) 
	cout << "Hello World! 2" << endl;
}

// Quiz : 두 수를 입력 받고, 두 수의 합을 출력하는 프로그램
void inputAndOutput() {
	
	int a;
	int b;
	int result;
	for (int i = 0; i < 3; i++) {
		cout << "두 수를 입력해 주세요." << endl;
		cin >> a;
		cin >> b;
		result = AddTwoNumbers(a, b);
		cout << "두 수의 합 : " << result << endl;
	}
	
	return;
}

int main() {

	cout << multiplyTwoNumbers(1, 2) << endl;
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << multiplyTwoNumbers(8, 13) << endl;

	printHelloWorld();

	inputAndOutput();
	
	return 0;

}