/*
	함수 원형
	함수 원형, 함수 호출, 함수 정의
*/
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(int a, int b);

//int func(int, int);		//함수 선언, 함수 원형 -> 메인함수를 제일 위로 올리고 사용자 함수가 있다고 알려주는 함수 원형

int main()
{
	int a;
	int b;
	char c;

	printf("두개의 정수를 입력하세요.: ");
	scanf_s("%d %d", &a, &b);

	printf("연산자를 입력하세요.: ");
	scanf_s(" %c", &c, sizeof(c));

	if (c == '+') printf("%d %c %d = %d", a, c, b, add(a, b));
	else if (c == '-') printf("%d %c %d = %d", a, c, b, sub(a, b));
	else if (c == '*') printf("%d %c %d = %d", a, c, b, mul(a, b));
	else if (c == '/') printf("%d %c %d = %.1f", a, c, b, div(a, b));
	else printf("잘못된 연산자입니다.");

	/*int result = func(10, 20);
	printf("호출 후 리턴된 값: %d\n", result);*/

	return 0;
}

int add(int a, int b) {
	int result = a + b;
	return result;
}

int sub(int a, int b) {
	int result = a - b;
	return result;
}

int mul(int a, int b) {
	int result = a * b;
	return result;
}

float div(int a, int b) {
	float result = a / b;
	return result;
}

//int func(int a, int b) {
//	int res = a + b;
//	return res;
//}