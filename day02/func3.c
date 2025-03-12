/*
	함수: 입력과 출력이 있는 함수
*/

#include <stdio.h>

int func(int a, int b) {
	int res = a + b;
	return res;
}
int main()
{
	int result = func(10, 20);
	printf("호출 후 리턴된 값: %d\n", result);
	return 0;
}