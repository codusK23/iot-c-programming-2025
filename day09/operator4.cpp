/*
*/
#include <iostream>

class MyClass {
private:
	int x, y;
public:
	MyClass(int ax = 0, int ay = 0) :x(ax), y(ay) { std::cout << "constructor" << std::endl; }
	
	MyClass(const MyClass& other) {
		std::cout << "===Copy Constructor===" << std::endl;

		x = other.x;
		y = other.y;
	}

	const MyClass add(const MyClass& other) {
		return MyClass(x + other.x, y + other.y);
	}

	void showMyClass() {
		std::cout << "x: " << x << ", y: " << y << std::endl;
	}
};

int main() 
{
	MyClass obj(10, 20);
	obj.showMyClass();

	MyClass obj2(20, 30);
	obj.showMyClass();

	MyClass obj3 = obj.add(obj2);
	obj.showMyClass();
	//MyClass obj4 = obj.operator+(obj3);
	//MyClass obj5 = obj4 + 100;					// obj4.operator + (100)
	return 0;

}

// 오버로딩 할 수 없는 연산자
// ( :: ), ( . ), ( * ), (sizeof)