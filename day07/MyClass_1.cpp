/*
	class setData, getData
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class MyClass {
private:
	int id;
	char name[20];
	int age;

public:
	void setData(int i_id, const char* i_name, int i_age) {
		id = i_id;
		strcpy(name, i_name);		// ¡÷º“ = rvalue
		age = i_age;
	}

	void getData() {
		std::cout << "id: " << id << ", name: " << name << ", age: " << age << std::endl;
	}
};

int main() {

	MyClass obj;
	obj.setData(1, "±Ë√∂ºˆ", 20);
	obj.getData();

	return 0;
}