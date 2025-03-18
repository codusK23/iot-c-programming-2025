/*
	입력 - scanf()
*/
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	//int inputVal;
	//printf("정수를 입력하세요");
	//scanf("%d",  &inputVal);	// & 주소연산자

	//printf("입력한 정수는 %d 입니다.", inputVal);

	int n1, n2;
	printf("두개의 정수를 입력하세요");
	scanf_s("%d %d", &n1, &n2);

	printf("입력한 두 값은 %d, %d 입니다.\n", n1, n2);
	return 0;
}