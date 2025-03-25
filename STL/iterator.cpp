/*
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>v = { 10, 20, 30, 40, 50 };

	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	cout << endl;

	for (auto it = v.begin(); it < v.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}

/*
vector<int>::iterator iter은 순방향 반복자 선언.
-> 생략하고 auto선언해도 괜찮음
*/