/*
	class
*/
#include <iostream>

class A {
public:
	int m_num;				// 멤버변수(속성)
	
	void set(int num) {
		m_num = num;
	}

	void print() {		//멤버 함수(기능), 메서드
		std::cout << "나는 A 클래스의 인스턴스입니다." << "num: " << m_num << std::endl;
	}

};

int main() {

	A obj;		// 객체 생성
	obj.print();
	obj.set(10);
	obj.print();
	//int n;

	return 0;
}