/*
*/
#include <stdio.h>
#include <stdlib.h>

struct mystruct {
	char name[20];
	int age;
	double height;
	char* str;
};

int main()
{
	struct mystruct s;					// mystruct 구조체 변수 선언
	strcpy(s.name, "강채연");
	s.age = 26;
	s.height = 160.6;
	s.str = (char*)malloc(sizeof(100));
	printf("인사말: ");
	gets(s.str);

	printf("이름: %s\n", s.name);
	printf("나이: %d\n", s.age);
	printf("키: %.1lf\n", s.height);
	printf("인사말: %s\n", s.str);

	free(s.str);

	return 0;
}