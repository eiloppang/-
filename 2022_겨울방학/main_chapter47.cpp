#include <iostream>
#include <string>
// user-defined data type
enum Color {

	// �������� ���� �Ҵ� ����
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,

}; // header file�� �����ϰ� include �ϴ� �� �Ϲ���


int main() {
	using namespace std;

	Color paint = COLOR_BLACK;
	Color house = COLOR_BLUE;
	Color apple = COLOR_RED;

	cout << paint << " " << COLOR_BLACK << endl;


	int colorID = COLOR_RED;
	cout << colorID << endl;

	// Color myColor = colorID; <- error 
	Color myColor = static_cast<Color>(3);

	// cin >> myColor <- error

	int inNumber;
	cin >> inNumber;

	if (inNumber == static_cast<Color>(0)) {
		myColor = static_cast<Color>(0);
		cout << myColor << endl;
	}
		
	// string strInput;
	// getline(cin, strInput);
	


}