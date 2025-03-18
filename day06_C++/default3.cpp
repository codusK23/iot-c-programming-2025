/*
* 함수 오버로딩중에서 디폴트 매개변수와 입력이 없는 순수한 함수정의가 있을 때
* 입력없는 함수 호출시 문제가 발생한다.
*/
#include <iostream>
using namespace std;

int func(int n = 0) {
	return n * n;
}

int func() {
	return 10;
}

int main() {

	cout << func(10) << endl;
	//cout << func() << endl; // 디폴드 값이 있는 함수와 매개변수 없는 함수가 겹치는 현상

	return 0;
}