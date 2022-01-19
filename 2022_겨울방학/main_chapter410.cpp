#include <iostream>
#include <string>
using namespace std;

struct Person {
	double		height;
	float		weight;
	int			age;
	string		name;

	void print() {
		cout << height << " " << weight << " " << age << " " << name << endl;
	}
};

struct Family {
	Person me, mom, dad;
};

Person getMe() {
	Person me{ 2.0, 100.0, 20, "Ga Yeon" };
	return me;
}

struct Employee {
	short		id;		// 2 bytes -> + 2 bytes µÈ Ã¤·Î ³ª¿È
	int			age;	// 4 bytes
	double		wage;	// 8 bytes

}; // 2 + 4 + 8 = 14

int main() {
	Person me{ 2.0, 100.0, 20, "Ga Yeon" };
	/*
	me.age = 20;
	me.name = "Ga Yeon";
	me.height = 2.0;
	me.weight = 100.0;
	*/
	me.print();

	// Person me2(me);
	Person me2;
	me2 = me;
	me2.print();

	Person meFromFunc = getMe();
	meFromFunc.print();

	Employee emp1;
	cout << sizeof(Employee) << endl; // result : 16 <- padding

}