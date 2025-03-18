/*
*	cin - 입력을 담당하는 객체
*/

#include <iostream>
using namespace std;

int main() {
	//int inVal;
	//cout << "숫자 입력>> ";
	//cin >> inVal;
	//cout << "inVal: " << inVal << endl;

	int inVal1, inVal2;
	cout << "정수 2개 입력>> ";
	cin >> inVal1 >> inVal2;
	cout << "정수의 합은>> " << inVal1 + inVal2 << endl;

	return 0;
}