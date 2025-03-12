#include <stdio.h>

int main()
{
	int n = 10, n2 = 20;
	int res;

	res = (n > n2) ? n : n2;	// 삼항연산자 ? 참:거짓
	printf("res: %d\n", res);

	res = n++;
	printf("res: %d, n2: %d\n", res, n); // 증감연산자

	res = ++n2;
	printf("res: %d, n2: %d\n", res, n2); // 증감연산자
	
	return 0;
}