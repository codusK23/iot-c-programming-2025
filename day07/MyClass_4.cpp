/*
	class 생성자 메모리 동적 할당, MyClass::
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


class MyClass {
private:
	//mutable int id;		//상수 객체에서도 멤버변수의 값 수정 가능
	int id;
	char* name;
	int age;

	// 생성자 만들고 동적할당 받으라 ~~
public:
	//MyClass() {}			// 디폴트 생성자
	~MyClass() { delete[] name; }		// 소멸자 (자동 호출된다. - 동적할당경우 말고는 별도로 작성할 필요가 없다.)
	MyClass(int i_id, const char* i_name, int i_age);
	void getData() const;
};


MyClass::MyClass(int i_id, const char* i_name, int i_age) {
	id = i_id;
	name = new char[strlen(i_name) + 1];		// 동적할당
	strcpy(name, i_name);
	age = i_age;
}

void MyClass::getData() const {			// 상수 멤버 함수(모든 멤버들을 상수화 시킨다 -> 속성 변경 불가)
	std::cout << "id: " << id << ", name: " << name << ", age: " << age << std::endl;
}

int main() {
	MyClass obj(1, "김철수", 20);
	obj.getData();
	return 0;
}