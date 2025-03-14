/*
	gets, fets : 공백까지 포함한 문자열 입력
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[100];

	// scanf
	/*printf("문자열 입력>> ");
	scanf("%s", str);

	printf("문자열: %s", str);
	scanf("%s\n", str);
	printf("다음 문자열: %s\n", str);*/

	// gets : 저장공간만 전달
	printf("공백을 포함한 입력 >> ");
	gets(str);
	printf("입력 문자열 %s\n", str);

	// fgets : 저장공간, 저장할 공간 사이즈, 표준입력버퍼(키보드입력)
	printf("공백을 포함한 입력 >> ");
	fgets(str, sizeof(str), stdin);
	printf("입력 문자열: %s\n", str);

	return 0;
}