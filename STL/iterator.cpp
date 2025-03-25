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
vector<int>::iterator iter�� ������ �ݺ��� ����.
-> �����ϰ� auto�����ص� ������
*/