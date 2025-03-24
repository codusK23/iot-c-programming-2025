/*
	��� ���迡�� ��ü ���� �� �Ҹ�
*/
#include <iostream>

class SuperClass {
private:
	int num;
public:
	SuperClass(int an) {
		num = an;
		std::cout << num << " SuperClass Constructor" <<std::endl;
	}

	~SuperClass(){
		std::cout << num << " SuperClass Destructor" << std::endl;
	}
};

class SubClass : public SuperClass {
private:
	int subNum;
public:
	SubClass(int num, int subNum) : SuperClass(num), subNum(subNum) {
		std::cout << subNum << " SubClass Constructor" << std::endl;
	}

	~SubClass() {
		std::cout << subNum << " SubClass Destructor" << std::endl;
	}
};


int main() {
	SuperClass s{ 1 };
	std::cout << "=========================" << std::endl;
	SubClass sub{ 2, 22 };
	return 0;
}

/*
	��ü�� ������ �� ȣ��Ǵ� �����ڿ� �������� ������ �ٸ���.
	�� �������� ȣ��� �������� ������ �ٸ���.
*/