#include <stdio.h>

int main()
{
	int answer = 10;
	int input;

	printf("숫자 맞추기 게임입니다 !\n");

	while (1) {
		printf("정수를 입력해주세요. : ");
		scanf_s("%d", &input);

		if (input == answer){
			printf("정답입니다~~\n");
			break;
		}
		else if (input > answer) printf("%d보다 작은 수 입니다.\n", input);
		else printf("%d보다 큰 수 입니다.\n", input);
	}
}