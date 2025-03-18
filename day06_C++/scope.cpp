/*
*/

#include <iostream>
#include "scope.h"

A::A(int aa) {						// std::cout <<
	a = aa;
}

void A::Ainfo() {
	std::cout << "a: " << a << std::endl;
}

int main() {
	A a(10);
	a.Ainfo();
	return 0;
}