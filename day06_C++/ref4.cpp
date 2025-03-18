/*
*  상수레퍼런스 : 상수도 참조 가능하다.
*/

#include <iostream>

int main() {

	int n = 10;
	//int& ref = n;
	const int& ref = 10;  // 상수 레퍼런스로 선언하면 리터럴도 참조할 수 있다
								// 임시 객체를 저장할 수 있는 공간이 생성된다.

	std::cout << "ref: " << ref << std::endl;
	return 0;
}