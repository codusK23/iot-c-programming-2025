#include <iostream>

class Human {
protected:
	char name[20];
	int age;
public:
	Human(const char*, int) {
		strcpy(this->name, name);
		this->age = age;
	}

	void getData() {
		std::cout << "�̸�: " << name << ", ����: " << age << std::endl;
	}
};

class Student : public Human {
private:
	int studentID;
public:
	Student(const char* name, int age, int studentID) : Human(name, age) {
		this->studentID = studentID;
	}

	void showStudent() {
		std::cout << "�̸�: " << name << ", ����: " << age << std::endl;
		std::cout << "�й�: " << studentID << std::endl;
	}

};

int main() {
	Human h("ȫ�浿", 25);
	h.getData();

	Student h2{ "�Ӳ���", 30, 202503 };
	h2.getData();
	h2.showStudent();

	return 0;
}