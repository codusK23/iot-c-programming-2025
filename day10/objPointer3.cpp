/*
*/
#include <iostream>

class MyClass {
public:
	int value;
	MyClass(int v = 0) : value(v) { }
	void showMyClass() {
		std::cout << "value: " << value << std::endl;
	}
};
int main() {
	MyClass* ptr = new MyClass{ 10 };
	ptr->showMyClass();
	std::cout << "value: " << ptr->value << std::endl;

	delete ptr;

	MyClass obj{};
	ptr = &obj;

	ptr->showMyClass();
	(*ptr).showMyClass();
	std::cout << "value: " << ptr->value << std::endl;

	//delete ptr;

	return 0;
}