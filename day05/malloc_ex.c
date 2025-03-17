#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[100];
	char* ps[5];			// 포인터 배열

	for (int i = 0; i < 5; i++) {
		printf("문자열을 입력하세요>> ");
		gets(str);
		ps[i] = (char*)malloc(strlen(str) + 1);

		if (ps[i] == NULL) {
			exit(1);
		}

		strcpy(ps[i], str);
	}

	for (int i = 0; i < 5; i++) {
		printf("heap[%d]: %s\n", i, ps[i]);
		free(ps[i]);
	}

	return 0;
}