#include <iostream>

class MyClass {
	int num;
public:
	MyClass(int n) : num(n) { std::cout << this << ", " << num << " Constructor" << std::endl; }
	MyClass(const MyClass& other) : num(other.num) { std::cout << this << " Copy Constructor" << std::endl; }
	~MyClass() { std::cout << this << ", " << num << " Destructor" << std::endl; }
	void setData(int n) { num = n; }
};

MyClass func(MyClass obj) {
	std::cout << "func()" << std::endl;
	return obj;
}

int main() {

	MyClass obj{ 10 };
	MyClass obj1{ func(obj) };
	std::cout << "bye" << std::endl;
	return 0;
}