/*
*/
#include <iostream>

class MyClass {
private:
	int num;
public:
	MyClass(int n) : num(n) {
		std::cout << num << " Constructor" << std::endl;
	}
	~MyClass() { std::cout << num << " Destructor" << std::endl; }
};

int main() {
	MyClass obj{ 10 };
	MyClass obj2 = MyClass{ 20 };
	MyClass{ 30 };

	std::cout << "bye" << std::endl;
	return 0;
}