/*
	weak_ptr : ���۷��� ī��Ʈ�� ������ ���� �ʴ� ����Ʈ ������
*/

#include <iostream>

class MyClass {
public:
	MyClass() { std::cout << "MyClass Constructor!!" << std::endl; }
	~MyClass() { std::cout << "MyClass Destructor!!" << std::endl; }
	void func() { std::cout << " Hi shared_ptr" << std::endl; }
};

int main() {
	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();				// c++14���ĺ��� ����
	std::weak_ptr<MyClass> weakPtr = ptr;
	std::cout << "ptr�� ptr2�� ������ ��ü�� ����Ų��. �����Ѵ�." << std::endl;

	// weak_ptr�� ��ü�� ��ȯ������ �����Ѵ�.
	std::shared_ptr<MyClass> ptr2 = weakPtr.lock();					// weak_ptr���� shared_ptr ��ȯ
	if (ptr2) { std::cout << "weak_ptr�� ��ȯ�� shared_ptr ��밡��" << std::endl; }

	return 0;
}