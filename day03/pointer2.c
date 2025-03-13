/*
	pointer - 주소의 크기는 컴퓨터 환경에 따라 다르다.
	포인터 변수의 크기는 타입에 상관없이 일정하다. 왜냐하면 주소의 크기는 일정하기 때문
*/

#include <stdio.h>

int main()
{
	char ch;
	int n;
	char* pch = &ch;
	int* pn = &n;
	printf("char 주소 크기: %d\t", sizeof(&ch));
	printf("int 주소 크기: %d\n", sizeof(&n));
	printf("char 포인터 크기: %d\t", sizeof(pch));
	printf("int 포인터 크기: %d\n", sizeof(pn));

	return 0;
}