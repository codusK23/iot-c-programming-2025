#include <stdio.h>

void myStrInput(char* array, int size);

int main()
{
	char str[100];								// 문자열을 저장할 배열
	int size = sizeof(str) / sizeof(str[0]);
	myStrInput(str, size);						// 문자열 입력을 받는 배열
	printf("입력한 문자열: %s\n", str);

	return 0;
}

void myStrInput(char* array, int size)
{
	int i = 0;
	while (1) {
		array[i] = getchar();
		if (array[i] == '\n' || i >= (size - 1)) break;
		i++;
	}
	array[i] = '\0';
}