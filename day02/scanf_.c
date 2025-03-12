#include <stdio.h>

int main()
{
	char name[20];
	int age;

	printf("나이를 입력해주세요: ");
	scanf_s("%d", &age);

	printf("이름을 입력해주세요: ");
	scanf_s("%s", name, sizeof(name));

	printf("당신의 이름은 %s이고 나이는 %d입니다.", name, age);

	//int a;
	//char ch;
	//scanf("%d", &a);
	////scanf(" %c", &ch);	// scanf 입력버퍼에 있는 값을 가져옴, 문자 하나를 입력하고 싶을 때 앞에 띄우기
	//getchar();				// 앞에 띄우거나 이렇게 사용
	//scanf("%c", &ch);


	return 0;
}
