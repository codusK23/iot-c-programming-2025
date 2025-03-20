/* private static 멤버 변수에 접근하기 위해서는 static 멤버 함수를 생성해서 접근*/

#include <iostream>

class AAA {
private:
	static int static_a;						// static 멤버 변수
	int n;
public:
	AAA(int n);
	static	void setStatic_a(int a);		// static 멤버 함수 -> 1번만 생성
	void print();
};

int AAA::static_a = 100;
AAA::AAA(int n) {
	this->n = 10;
}

void AAA::setStatic_a(int a) {
	static_a = a;
	//n = 0;		// 일반 멤버의 접근은 허용되지 않는다. static 멤버의 사용만 가능하다.
}

void AAA::print() {
	std::cout << "static_a: " << static_a << ", n: " << n << std::endl;
}

int main() {

	AAA obj1(10), obj2(20);		// 객체별로 멤버 함수 생성된 것이 아닌 기존에 만들어진 멤버 함수 공유
	obj1.print();
	obj2.print();

	obj1.setStatic_a(50);
	obj1.print();

	return 0;
}