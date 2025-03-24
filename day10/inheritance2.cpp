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
		std::cout << "이름: " << name << ", 나이: " << age << std::endl;
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
		std::cout << "이름: " << name << ", 나이: " << age << std::endl;
		std::cout << "학번: " << studentID << std::endl;
	}

};

int main() {
	Human h("홍길동", 25);
	h.getData();

	Student h2{ "임꺽정", 30, 202503 };
	h2.getData();
	h2.showStudent();

	return 0;
}