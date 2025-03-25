/*
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v = { 10, 20, 30, 40, 50 };

	vector<int>::reverse_iterator rit;
	for (rit = v.rbegin(); rit != v.rend(); rit++) {
		cout << *rit << endl;
	}

	return 0;
}

/*
	vector<int>::reversr_iterator rit - 역방향 반복자 선언
	-> 생략하고 auto선언해도 됨
	rbegin(): 마지막 주소, rend(): 처음 원소의 이전 주소
*/