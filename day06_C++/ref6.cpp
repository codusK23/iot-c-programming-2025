/*
*  출력인 경우: 레퍼런스
*/
#include <iostream>

int& func(int& ref) {
	ref++;

	return ref;				// lvalue
	//return ref++;			// rvalue
}

int main() {
	int n = 10;
	//int& ref = func(n);
	int ref = func(n);		// 함수가 참조 자료형으로 리턴하는 경우 참조해도 되고(15행), 안 해도 되고
	std::cout << ref << std::endl;
	return 0;
}