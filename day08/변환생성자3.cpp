#include <iostream>

class MyClass {
private:
	int value;
public:
	MyClass(int value) {
		std::cout << "변환 생성자 호출!!" << std::endl;
		this->value = value;
	}

	void printMyClass() {
		std::cout << "value: " << value << std::endl;
	}

};

int main() {

	MyClass obj = 2;			//변환 생성자 호출-객체의 변환이 일어남
	obj.printMyClass();

	MyClass obj2{ 10 };
	obj2.printMyClass();

	return 0;
}