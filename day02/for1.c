#include <stdio.h>

int main()
{
	printf("구구단 입니다.\n");

	for (int i = 1; i < 10; i++) {
		printf("===%d단 입니다.===\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}

	int input;
	printf("출력하고자 하는 단을 입력해주세요.: ");
	scanf_s("%d", &input);
	printf("===%d단 입니다.===\n", input);

	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", input, i, input * i);
	}
	return 0;
}