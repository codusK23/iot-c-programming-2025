/*
* 레퍼런스 - 선언과 동시에 반드시 초기화해야만 한다.
*/

#include <iostream>

int main() {

	int num = 10; int num2 = 100;
	int& ref = num;			// 레퍼런스 선언, num의 메모리 공간에 ref라는 별명이 붙는다.
	int* pn = &num;			// 포인터 선언
	int& rref = ref;
	rref = num2;

	std::cout << rref << ", " << num2 << std::endl;

	//int& rref;				
	//rref = ref;

	num++;
	ref++;
	(*pn)++;

	std::cout << " num++: " << num << std::endl;
	std::cout << "ref++: " << ref << std::endl;
	std::cout << "*(pn)++: " << *pn << std::endl;

	std::cout << "&num: " << &num << std::endl;
	std::cout << "&ref: " << &ref << std::endl;


	return 0;
}