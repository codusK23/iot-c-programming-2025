#include <stdio.h>

typedef int int32mt;		// int형태를 int32mt라는 형태로 쓰겠다. 형태 별칭 설정

struct human {
	char name[100];
	//int age;
	int32mt age;
};

typedef struct myst {
	int a;
	int b;
} Myst;

int main() {

	//struct human h = { "홍길동", 100 };
	//struct human h2 = { "이순신", 100 };
	struct human h = { "홍길동", 100 },
		h2 = { "이순신", 110 },
		h3 = { "김유신", 200 };

	int n1 = 100, n2 = 200, n3 = 300;

	return 0;
}