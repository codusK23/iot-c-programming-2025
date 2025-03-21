/*
	멤버함수 연산자 오버로딩 : p1 operator 연산자 (p2) ex) p1 operator + (p2)
*/

#include <iostream>

class MyClass {
private:
	int value;
public:
	MyClass(int n) :value(n){ }
	MyClass operator + (const MyClass& other) {				// 연산자 오버로딩
		std::cout << "+ overoading" << std::endl;
		return MyClass(value + other.value);
	}
	void showmyClass() {
		std::cout << "value: " << value << std::endl;
	}
};

int main() {
	MyClass obj(10);
	obj.showmyClass();						// 초기값을 가지는 객체 생성

	MyClass obj2(obj);
	obj2.showmyClass();						// obj를 복사해서 객체 생성

	MyClass obj3 = obj2;
	obj3.showmyClass();						// obj를 복사해서 객체 생성

	//MyClass obj4 = obj + obj2 + obj3;				// 객체를 더한 결과를 가지고 객체 생성
	MyClass obj4 = obj.operator+(obj2);
	obj4.showmyClass();
	return 0;
}