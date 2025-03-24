/*
	inheritance(상속)
	private, public, protected
	is a(무엇은 무엇이다. 관계), has a(소유) 관계가 성립해야 한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>


class Human {							// 부모 클래스, 기초 클래스, 슈퍼 클래스, 베이스 클래스
private:
	char name[20];
	int age;
public:
	Human(const char*, int);
	void getData();
};

class Student : public Human {		// 자식 클래스, 파생 클래스, 서브 클래스, 드라이버드 클래스
private:
	int studentID;
public:
	Student(const char* name, int age, int studentID);
	void showStudent();
};

Human::Human(const char* i_name, int i_age) {
	strcpy(name, i_name);
	age = i_age;
}

void Human::getData() {
	std::cout << "이름: " << name << ", 나이: " << age << std::endl;
}

/* 상속받은 멤버들은 상속한 부모클래스의 생성자에서 초기화를 한다. */
Student::Student(const char* i_name, int i_age, int i_studentID) : Human(i_name, i_age) {
	//strcpy(name, i_name);
	//age = i_age;
	studentID = i_studentID;
}

void Student::showStudent() {
	//std::cout << "이름: " << name << ", 나이: " << age << std::endl;
	std::cout << "학번: " << studentID << std::endl;
}

int main() {
	Human h("홍길동", 25);
	h.getData();

	Student h2{ "임꺽정", 30, 202503 };
	h2.getData();
	h2.showStudent();

	return 0;
}