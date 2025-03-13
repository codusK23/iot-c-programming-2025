/*

*/
#include <stdio.h>

int main()
{
	char str[100] = "banana";
	char str2[6] = "apple";		// char 배열에 저장시는 +1만큼의 방이 필요하다
	char str3[10] = {'o', 'r', 'a', 'n', 'g', 'e'};
	char str4[4];						// 이렇게 배열 선언한 경우 자동으로 null입력이 안 됨
	str4[0] = 'a';
	str4[1] = 'b';
	str4[2] = 'c';
	str4[3] = '\0';


	printf("str: %s\n", str);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str3[6]: %s\n", str3[6]);
	printf("str4: %s\n", str4);
	printf("str 나머지 방: %s\n", str[10]);

	// str = str2
	strcpy(str, str2); //string copy
	printf("str: %s\n", str);

	strcpy(str, "dog");
	printf("str: %s\n", str);

	str[0] = 'D';
	printf("str: %s\n", str);

	return 0;
}