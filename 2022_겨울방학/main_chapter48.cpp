#include <iostream>

int main() {
	using namespace std;

	enum class Color {
		RED,
		BLUE,
	};

	enum class Fruit {
		BANANA,
		APPLE,
	};

	Color color = Color::RED;
	Color color2 = Color::BLUE;
	Fruit fruit = Fruit::BANANA;

	// if (color == fruit) cout << "Color is fruit?" << endl; // same
	if (color == color2)
		cout << "Same color" << endl;
	else
		cout << "Not same color" << endl;
}