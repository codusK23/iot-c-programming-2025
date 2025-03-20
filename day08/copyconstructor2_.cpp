/*
		(deep copy) 복사생성자
		동적할당 받은 경우 복사하는 객체도 동적 할당 받아서 별개로 복사하여 저장이 되어야 한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* name, int age) {
		std::cout << "===Constructor Call===" << std::endl;

		this->name = new char[strlen(name) + 1];			// 동적할당
		strcpy(this->name, name);
		this->age = age;
	}
	
	Person(const Person& p) {					// 깊은 복사 생성자
		std::cout << "===Copy Constructor Call===" << std::endl;

		this->name = new char[strlen(p.name) + 1];
		strncpy(this->name, p.name, strlen(p.name) + 1);
		this->age = p.age;
	}

	~Person() { delete[] name; }

	void printPerson() {
		std::cout << "이름: " << name << ", 나이: " << age << std::endl;
	}
};

int main() {

	Person p("홍길동", 30);
	p.printPerson();

	Person p2(p);
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();

	return 0;
}

/*
	디폴트, 자동으로 제공받는 생성자 : 디폴트 생성자, 복사 생성자, 소멸자
*/