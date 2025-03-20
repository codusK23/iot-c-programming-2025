/*
	이동 생성자(T&&)
	r-value reference를 파라미터로 갖는 이동 생성자
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {
private:
	char name[10];
	int age;
public:
	// 입력 2개 받는 생성자
	Human(const char* name, int age){
		std::cout << "===입력 2개 생성자 호출===" << std::endl;
		strcpy(this->name, name);
		this->age = age;
	}

	// 복사 생성자
	Human(Human& h) {
		std::cout << "===복사 생성자 호출===" << std::endl;
		strcpy(this->name, h.name);
		this->age = h.age;
	}

	// 이동 생성자
	Human(Human&& h) noexcept{			// 데이터 이동하는 도중 문제 발생되지 않도록 설정
		std::cout << "===이동 생성자 호출===" << std::endl;
		strcpy(this->name, h.name);
		this->age = h.age;

		//h.name = nullptr;
		h.age = 0;		//임시객체 바로 죽이지 않음
	}

	void printHuman() {
		std::cout << "이름: " << name << ", 나이: " << age << std::endl;
	}
};

int main() {

	Human h("홍길동", 30);
	h.printHuman();

	Human h2(h);
	h2.printHuman();

	Human h3(std::move(h));
	h3.printHuman();
	h.printHuman();

	return 0;
}