/*
	함수 포인터
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int sum(int, int);
int min(int, int);
void func(int (*fp)(int, int));

//void func()
int main()
{
	int (*fp)(int, int);		// 함수 포인터
	int res;

	func(&fp);

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
	char a[10];
	int x;
	int y;

	printf("연산하고자 하는 함수를 입력해주세요 (sum/min): ");
	scanf_s("%s", a);

	if (strcmp(a, 'sum') == 0) {
		fp = sum;
	}
	else if (strcmp(a, 'min') == 0) {
		fp = min;
	}
	else {
		printf("잘못된 입력입니다.\n");
	}

	printf("연산하고자 하는 정수 두 개를 입력해주세요: ");
	scanf_s("%d %d", &x, &y);

	int res = fp(x, y);
	printf("연산 결과: ", res);
	
}