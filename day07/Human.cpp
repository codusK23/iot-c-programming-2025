/*
	step1. 이름과 전화번호는 동적할당.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

/*
class Human {
private:
	const char* pname;
	int age;
	const char* ptel;
public:
	Human(const char* i_pname, int i_age, const char* i_ptel) : pname(i_pname), age(i_age), ptel(i_ptel) {	 }
	~Human() {}
	void getData(){
		std::cout << "이름: " << pname << ", 나이: " << age << ", 전화번호: " << ptel << std::endl;
	}
};
*/

class Human {
private:
	char* pname;
	int age;
	char* ptel;
public:
	Human(const char* i_pname, int i_age, const char* i_ptel) {
		pname = new char[strlen(i_pname) + 1];
		strcpy(pname, i_pname);

		age = i_age;

		ptel = new char[strlen(i_ptel) + 1];
		strcpy(ptel, i_ptel);
	}
	~Human() {
		delete[] pname;
		delete[] ptel;
	}
	void getData() {
		std::cout << "이름: " << pname << ", 나이: " << age << ", 전화번호: " << ptel << std::endl;
	}
};

int main() {
	Human h("홍길동", 30, "010-1234-1234");
	h.getData();

	return 0;
}