#include <iostream>
#include "myWork.h"
#include "add.h" // error -> add가 2번 정의된 꼴 (#pragma once가 없었을 때)

using namespace std;

int main() {
	doSomething();
	return 0;
}