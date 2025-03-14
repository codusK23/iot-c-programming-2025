/*
		포인터 배열: 배열(포인터를 저장할 수 있는 배열)
		배열 포인터: 포인터(배열을 가리키는 포인터)
*/
#include <stdio.h>

int main()
{
	char* pary[5] = { "dog", "tiger", "lion", "apple", "banana" };		// char*을 5개 저장할 수 있는 포인터 배열
	char* pary2[3];
	pary[0] = "abcd";
	pary[1] = "efg";
	pary[2] = "hijk";

	for (int i = 0; i < 5; i++) {
		printf("%s\n", pary[i]);
	}

	return 0;
}