/*
	����Ʈ ������: ��ü�� ���� �ֱ⸦ ��ü�� �ñ����� ���α׷����� �޸� ���� �δ��� �ٿ��ش�.
	unique_ptr - �������� ���������� �����ϴ� ����Ʈ ������(auto_ptr�� ��ü)
*/
#include <iostream>

class MyClass {
public:
	MyClass() { std::cout << "MyClass() ȣ��" << std::endl; }
	~MyClass() { std::cout << "~MyClass() ȣ��" << std::endl; }
};

int main() {

	std::unique_ptr<MyClass> ptr(new MyClass{});
	std::unique_ptr<MyClass> ptr2 = move(ptr);

	return 0;
}