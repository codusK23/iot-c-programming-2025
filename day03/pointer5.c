/*
	배열과 포인터
*/
#include <stdio.h>

int main()
{
	int ary[5];
	int* pa = ary;

	*(pa + 0) = 10;
	printf("*pa: %d, ary[0]: %d\n", *pa, ary[0]);
	printf("pa: %d\n", pa + 0);
	printf("pa + 1: %d\n", (pa + 1));

	*(pa + 1) = 20;
	printf("*(pa + 1): %d, ary[1]: %d\n", *(pa+1), ary[1]);
	printf("pa[1]: %d\n", pa[1]);				// [ ] == *( ) : 포인터연산식
	
	return 0;
}