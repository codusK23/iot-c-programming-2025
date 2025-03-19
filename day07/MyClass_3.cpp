/*
	class 생성자 메모리 동적 할당
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


class MyClass {
private:
	int id;
	char* name;
	int age;

	// 생성자 만들고 동적할당 받으라 ~~
public:
	MyClass() {}			// 디폴트 생성자
	~MyClass() { delete[] name; }		// 소멸자 (자동 호출된다. - 동적할당경우 말고는 별도로 작성할 필요가 없다.)
		
	MyClass(int i_id, const char* i_name, int i_age) {

		id = i_id;
		name = new char[strlen(i_name) + 1];		// 동적할당
		strcpy(name, i_name);		// 주소 = rv
		age = i_age;
	}

	void getData() {
		std::cout << "id: " << id << ", name: " << name << ", age: " << age << std::endl;
	}
};

int main() {

	MyClass obj(1, "김철수", 20);
	obj.getData();
	return 0;
}