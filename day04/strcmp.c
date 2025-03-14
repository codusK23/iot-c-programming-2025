/*
	strcmp - 문자열 비교 함수
*/
#include <stdio.h>

int main()
{
	char str[100] = "apple";
	char str2[100] = "orange";

	/* str 먼저 나오면 -1 반환, str2 먼저 나오면 1 반환, 같으면 0 반환 */
	if (strcmp(str, str2) > 0) printf("%s\n", str2);
	else printf("%s\n", str);

	printf("a: %d\n", 'a');
	printf("a: %d\n", 'o');
	strncmp(str, str2, 3);

	return 0;
}