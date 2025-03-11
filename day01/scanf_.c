#include <stdio.h>

int main()
{	
	char name[20];
	int age;

	printf("이름을 입력해주세요: ");
	scanf_s("%s", name, sizeof(name));
	
	printf("나이를 입력해주세요: ");
	scanf_s("%d", &age);

	printf("이름은 %s이고, 나이는 %d세 입니다.\n", name, age);

	return 0;
}