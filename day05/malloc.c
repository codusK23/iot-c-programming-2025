/*
	메모리 동적 할당: malloc - free
*/
#include <stdio.h>
#include <stdlib.h>		// 헤더파일 포함

int main()
{
	int* pi = (void*)malloc(sizeof(int)); // 힙영역에 입력크기만큼 메모리 공간을 할당받아서 시작 주소를 리턴한다.
	if (pi == NULL) {
		printf("메모리 할당 실패");
		exit(1);
	}
	printf("할당 성공!");

	free(pi);

	return 0;
}
