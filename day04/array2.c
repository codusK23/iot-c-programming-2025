/*
	2차원 char 배열
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char fruit[5][10];

	for (int i = 0; i < 5; i++) {
		scanf("%s", &fruit[i]);
	}

	return 0;
}