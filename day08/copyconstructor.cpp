/*
	copyconstructor (복사생성자)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Person {
private:
	char m_name[20];
	int m_age;
public:
	Person(const char* name, int age) {
		printf("===Constructor Call===\n");
		strcpy(m_name, name);
		m_age = age;
	}

	void printPerson() {
		printf("name: %s, age: %d\n", m_name, m_age);
	}
};

int main() {
	Person p("홍길동", 30);
	p.printPerson();

	Person p2(p);	// 복사
	p2.printPerson();

	Person p3 = p;  //복사
	p3.printPerson();

	return 0;
}