/*
	struct(구조체) - 사용자 정의 자료형
	기존 자료형을 묶어서 만든 복합 자료형(타입)
*/
#include <stdio.h>
#include <string.h>
# define _CRT_SECURE_NO_WARNINGS

struct Human				//구조체 선언 struct 구조체명
{
	char name[100];		// 멤버변수
	int age;
};

int main()
{
	/* (.) 멤버 접근 연산자 */
	struct Human h;		//구조체 human의 변수 h선언
	h.age = 30;				// h객체의 멤버 age에 30을 저장한다.
	//h.name = "hong kildong"	// 안 됨
	strcpy(h.name, "hong kildong");


	char str[100] = "hong kildong";
	printf("%s\n", str);
	//char str2[100];
	//str2 = "kim chulsu"; // 배열이름은 주소, 주소에다가 대입 X, 

	/*
	str2[0] = 'h';
	str2[1] = 'o';
	...
	str2[10] ='\0'
	*/


	printf("나의 이름은 %s이고 나이는 %d입니다.", h.name, h.age);

	return 0;
}