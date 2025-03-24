/*
	��ӿ��� ��ü ������
	: �θ�Ÿ���� �����ͷ� �ڽ�Ÿ���� ��ü�� ����Ű�� ��ü�� �θ�Ÿ������ ��ĳ���õȴ�.
*/

#include <iostream>

class Base {
public:
	void show() { std::cout << "Base Class!" << std::endl; }
};

class Derived : public Base {			
public:
	void show() { std::cout << "Derived Class!" << std::endl; }		// �������̵� (������
};

int main() {
	Base* bptr = nullptr;
	Derived* dptr = nullptr;

	Derived obj;				// �Ļ� Ŭ���� ��ü
	dptr = &obj;
	dptr->show();

	bptr = &obj;			// �θ�Ÿ���� �����ͷ� �ڽ�Ÿ���� ��ü�� ����Ų��. (Upcasting)
	bptr->show();
	//bptr->Derived::show();

	return 0;
}