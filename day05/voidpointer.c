/*
	함수 포인터
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int, int);
int min(int, int);
void func(int (*fp)(int, int));

//void func()
int main()
{
	int (*fp)(int, int);		// 함수 포인터
	int res;
	//res = sum(20, 10);
	//res = min(20, 10);
	//fp = sum;
	//res = fp(20, 10);
	//printf("res: %d\n", res);

	(*func)(10, 20);

	return 0;
}

int sum(int a, int b)
{
	int res = a + b;
	return res;
}

int min(int a, int b)
{
	int res = a - b;
	return res;
}

void func(int (*fp)(int, int)) 
{
	char a[4];
	printf("연산하고자 하는 함수를 입력해주세요: ");
	scanf("%s", a);
	printf("%s", a);

	if (a == 'sum') {
		printf("더하기");
	}

	//fp = sum;
	//int res = fp(20, 10);
	
	//printf("원하는 함수가 무엇입니까?");
	// if문이나 switch문
	
}