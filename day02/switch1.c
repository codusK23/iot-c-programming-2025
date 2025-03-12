#include <stdio.h>

int main()
{
	int num = 2;
	int input;
	printf("1~5사이의 숫자를 입력해주세요 : ");
	scanf_s("%d", &input);
	switch (input) {
	case 5:
		printf("5보다 작습니다.");
		break;				
	case 4:
		printf("4보다 작습니다.");
		break;
	case 3:
		printf("3보다 작습니다.");
		break;
	case 2:
		printf("정답입니다.");
		break;
	case 1:
		printf("1보다 큽니다.");
		break;
	default:
		printf("1~5사이의 숫자만 입력해주세요");
		break;
	}
	return 0;
}

// Switch(조건식) ~ case: