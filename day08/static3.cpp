/*
		StaticTest라는 클래스 생성, 멤버 변수: 이름, 전화번호, 회원주소(cnt)
		3개의 입력을 받는 생성자 작성, 회원 번호는 자동으로 증가
		출력담당의 showmember() 메서드 구현

		회원번호는 자동으로 증가되도록 구현@@
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class StaticTest {
private:
	static int cnt;
	char name[20];
	char phone[20];
	char addr[20];

public:
	StaticTest(const char* name, const char* phone, const char* addr);
	void showmember();
};

int StaticTest::cnt = 0;

StaticTest::StaticTest(const char* name, const char* phone, const char* addr) {
	cnt++;
	strcpy(this->name, name);
	strcpy(this->phone, phone);
	strcpy(this->addr, addr);
}

void StaticTest::showmember() {
	std::cout << "회원번호: " << cnt << std::endl;
	std::cout << "이름: " << name << ", 전화번호: " << phone << ", 주소: " << addr << std::endl;
}

int main() {

	StaticTest m1("홍길동", "010-1111-1111", "부산");
	m1.showmember();

	StaticTest m2("김영희", "010-2222-2222", "부산");
	m2.showmember();

	StaticTest m3("김철수", "010-3333-3333", "울산");
	m3.showmember();
	return 0;
}