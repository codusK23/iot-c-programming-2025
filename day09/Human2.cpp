/*
	step4.
	char 포인터의 name, int 타입의 age, 출력을 담당하는 showHuman()을 가지는 Human 클래스가 있다.
	name을 동적할당하고 나이 30, 이름 홍명보인 man객체를 생성하시오.
	man 객체를 복사하여 copy 객체를 생성하시오.
	xman = man이 실행시키시오.
*/


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {
private:
	char* name;
	int age;
public:
	Human () { }
	Human(const char* i_name, int i_age) : age(i_age) {
		std::cout << "===Constructor===" << std::endl;
		name = new char[strlen(i_name) + 1];
		strcpy(name, i_name);
	}
	~Human() {
		std::cout << "===Destuctor===" << std::endl;
		delete[] name;
	}

	Human(const Human& other) {
		std::cout << "===Copy Constructor===" << std::endl;
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		age = other.age;
	}

	void showHuman() {
		std::cout << "이름: " << name << ", 나이: " << age << std::endl;
	}

	const Human& operator=(const Human& rhs);
};
const Human& Human::operator=(const Human& rhs) {
	if (this != &rhs) {
		delete[] name;
		std::cout << "===Operator Overloading===" << std::endl;
		this->name = new char[strlen(rhs.name) + 1];
		strcpy(this->name, rhs.name);
		this->age = rhs.age;
	}

	return *this;
}


int main() {
	Human man("홍명보", 30);
	man.showHuman();

	Human copyman(man);
	copyman.showHuman();

	Human xman;
	xman = copyman;
	xman.showHuman();
	return 0;
}