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

	// ���� X (return �ڿ��� ������ �� ��) 
	cout << "Hello World! 2" << endl;
}

// Quiz : �� ���� �Է� �ް�, �� ���� ���� ����ϴ� ���α׷�
void inputAndOutput() {
	
	int a;
	int b;
	int result;
	for (int i = 0; i < 3; i++) {
		cout << "�� ���� �Է��� �ּ���." << endl;
		cin >> a;
		cin >> b;
		result = AddTwoNumbers(a, b);
		cout << "�� ���� �� : " << result << endl;
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