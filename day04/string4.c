/*
	puts, fputs - 출력 전용 함수
	stdout - 표준 출력 버퍼(스트림)
*/
#include <stdio.h>

int main()
{
	char str[100] = "Delmonte orange";
	char* ps = "banana";

	printf("%s\n", str);
	puts(str);					// 자동 개행
	fputs(str, stdout);		// 개행 안 됨
	puts(ps);
	fputs(ps, stdout);

	return 0;
}