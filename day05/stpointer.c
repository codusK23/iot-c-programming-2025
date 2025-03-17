/*
	구조체 포인터
*/

#include <stdio.h>

typedef struct score {
	int kor;
	int eng;
	int mat;
} Score;

int main() {
	Score s = { 100, 80, 85 };
	Score* ps = &s;

	printf("국어: %d\n", ps->kor);
	printf("영어: %d\n", ps->eng);
	printf("수학: %d\n", (*ps).mat);

	return 0;
}

/*
		구조체 변수를 통해서 멤버에 접근하는 방법은? .멤버 접근 연산자
		구조체 포인터를 통해서 멤버에 접근하는 방법은? ->(화살표연산자, 애로우연산자)
*/