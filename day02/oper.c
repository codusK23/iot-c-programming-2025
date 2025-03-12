#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 30;
	int res;

	res = (n > 10) && (n < 20);
	printf("res: %d\n", res);

	res = (n < 10) || (n > 20);
	printf("res: %d\n", res);
	
	res = (n >= 30);		// >= : 복합대입연산자
	printf("res: %d\n", res);
	
	res = !(n >= 30);		// ! : 부정연산자
	printf("res: %d\n", res);

	res = ~n;
	printf("res: %d\n", res);

	res = n << 1;
	printf("res: %x\n", res);	// 쉬프트 연산자

	res = res >> 1;
	printf("res: %x\n", res);	

	int n2 = 143;					// 0b 1000 1111
	res = n2 << 1;					// 0b 1 0001 1110
	printf("res: %x\n", res);
	res = n2 >> 1;					// 0b 0100 0111
	printf("res: %x\n", res);

	return 0;
}