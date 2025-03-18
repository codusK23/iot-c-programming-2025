/*
*  출력인 경우: 일반변수
*/

#include <iostream>

int func(int& anum) {
	anum++;
	return anum;
}

int main() {

	int num = 10;
	//int res = func(num);
	//const int& res = func(num);    // 임시객체는 참조할 수 없지만 const를 사용할 시 임시객체에 대한 참조 허용
	const int& res = func(num);
	std::cout << res << std::endl;
	return 0;
}