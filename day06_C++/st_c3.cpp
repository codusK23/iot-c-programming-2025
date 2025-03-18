/*
	C++ class
*/

#include <iostream>

class Human {
public:
	char name[20];
	int age;
	char job[10];

	Human() {}		// default 생성자(입력이 없는 것), 생성자 자체는 return이 없음, 클래스와 이름이 똑같음

	void showHuman() {
		printf("name: %s, age: %d, job: %s", name, age, job);
	}
};

int main() {
	Human h = { "김철수", 30, "백수" };
	h.showHuman();

	return 0;
}
