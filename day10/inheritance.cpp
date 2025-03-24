/*
	inheritance(���)
	private, public, protected
	is a(������ �����̴�. ����), has a(����) ���谡 �����ؾ� �Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>


class Human {							// �θ� Ŭ����, ���� Ŭ����, ���� Ŭ����, ���̽� Ŭ����
private:
	char name[20];
	int age;
public:
	Human(const char*, int);
	void getData();
};

class Student : public Human {		// �ڽ� Ŭ����, �Ļ� Ŭ����, ���� Ŭ����, ����̹��� Ŭ����
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
	std::cout << "�̸�: " << name << ", ����: " << age << std::endl;
}

/* ��ӹ��� ������� ����� �θ�Ŭ������ �����ڿ��� �ʱ�ȭ�� �Ѵ�. */
Student::Student(const char* i_name, int i_age, int i_studentID) : Human(i_name, i_age) {
	//strcpy(name, i_name);
	//age = i_age;
	studentID = i_studentID;
}

void Student::showStudent() {
	//std::cout << "�̸�: " << name << ", ����: " << age << std::endl;
	std::cout << "�й�: " << studentID << std::endl;
}

int main() {
	Human h("ȫ�浿", 25);
	h.getData();

	Student h2{ "�Ӳ���", 30, 202503 };
	h2.getData();
	h2.showStudent();

	return 0;
}