#include <iostream>
#include <string>
using namespace std;

int main() {

	const char myStrs[] = "Hello, World"; // basic
	const string myHello = "Hello, World"; // 사용자 정의 자료형

	string myID = "123";
	cout << myHello << endl;

	cout << "How old are you? : ";
	int age;
	cin >> age;
	// cin.ignore(32767, '\n');
	cin.ignore(numeric_limits<streamsize>::max(), '\n');


	cout << "What your name? : ";
	string name;
	// cin >> name; // ex: Jack Jack -> age까지 Jack Jack로 출력 -> buffer 안에 담아둔 게 출력됨
	getline(cin, name);

	//cout << "How old are you? : ";
	//string age;
	//// cin >> age;
	//getline(cin, age);

	cout << name << " " << age << endl;

	string a("Hello, ");
	string b("World!");
	string hw = a + b; // append

	hw += " I'm good.";

	cout << hw << endl;

	string n("Hello World!");
	cout << n.length() << endl;

}