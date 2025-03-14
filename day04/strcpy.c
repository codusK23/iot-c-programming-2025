/*
	strcpy - 문자열 복사 함수 / 각 인덱스에 방문해서 일일이 복사하는 것
	strncpy - // 시작주소부터 복사할 문자갯수를 설정할 수 있다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void myStrcpy(char* array, char* c_array, int size);

int main()
{
	char str[100] = "orange";
	char str2[100] = "apple";
	char* ps = "apple";

	printf("str: %s\n", str);
	printf("str2: %s\n", str2);

	strcpy(str, str2);				// strcpy(복사, 원본)
	printf("str: %s\n", str);
	printf("str2: %s\n", str2);

	strcpy(str, "banana");
	printf("str: %s\n", str);

	strcpy(str, ps);
	printf("str: %s\n", str);

	strncpy(str, "abcd", 3);	// 시작주소부터 복사할 문자갯수를 설정할 수 있다.
	printf("%s\n", str);
	
	char array[100] = "dog";
	char c_array[100] = "cat";
	int size = sizeof(array) / sizeof(array[0]);

	myStrcpy(array, c_array, size);
	printf("myStrcpy str: %s\n", array);
	printf("myStrcpy str2: %s\n", c_array);



	//에러
	//strcpy(ps, str2);
	//printf("ps: %s\n", ps);

	return 0;
}

void myStrcpy(char* array, char* c_array, int size) {
	for (int i = 0; i < size; i++) {
		array[i]  = c_array[i];
	}
}