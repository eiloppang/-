#include <iostream>
#include <vector>
#include <cstdint>

int main() {
	using namespace std;

	typedef double distanceT;

	int8_t i(97); // 고정 너비 정수

	// same
	double		myDistance;
	distanceT	home2work;
	distanceT	home2school;

	// typedef vector<pair<string, int>> pairlistT;
	using pairlistT = vector<pair<string, int>>;
	pairlistT pairlist1;
}