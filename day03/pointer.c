/*
	pointer - 주소,
	포인터 변수 - 주소를 저장할 수 있는 공간 
*/
#include <stdio.h>

int main()
{
	//int p;				// int타입의 변수 선언
	int* p;				// int타입의 포인터 변수 선언
	char* pc;			// char타입의 포인터 변수 선언
	double* pd;

	int num=100;
	printf("num의 주소: %p\n", &num);
	printf("num의 값: %d\n", num);
	p = &num;																// int* p -> 아무의미 없는 표시
	printf("포인터변수 p에 저장된 값: %p\n", p);
	printf("포인터변수 p가 가리키는 곳의 값: %d\n", *p);		// * 간접참조 연산자
	num += 1;
	printf("num: %d, *p: %d\n", num, *p);

	*p += 1;
	printf("num: %d, *p: %d\n", num, *p);

	return 0;
}