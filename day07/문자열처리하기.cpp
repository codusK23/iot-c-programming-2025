/*
	문자열 처리하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() {

	char str[20] = "홍길동";
	std::cout << str << std::endl;

	char str2[20];
	//str2 = "김영희";			// 주소에 문자열을 대입하라는 의미 -> 불가
	strcpy(str2, "김영희");

	std::cout << str2 << std::endl;


	char str3[100];
	std::cout << "이름입력 >> ";
	std::cin >> str3;
	std::cout << str3 << std::endl;


	//char* name;
	//name = '채연';		// 불가


	const char* name;
	name = "채연";			// const 붙이면 가능 상수라 가능
	std::cout << name << std::endl;




	return 0;
}