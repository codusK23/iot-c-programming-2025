/*
	다른 함수에 선언된 지역 변수의 값을 바꾸는 방법 1
*/
#include <iostream>
using namespace std;

void chFunc(int* _n);

int main() {
	int n = 10;
	cout << "호출 전 n: " << n << endl;

	chFunc(&n);
	cout << "호출 후 n: " << n << endl;

	return 0;
}

void chFunc(int* _n) {
	//_n = 20; // 변하지 않음 -> 주소로 전달
	*_n = 20;

}