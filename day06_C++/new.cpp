/*
	동적 할당 받을 크기를 입력받고 원소를 저장하여 출력하시오.
*/

#include <iostream>

int main() {

	int size;
	int* p;

	printf("배열 크기를 입력하시오.: ");
	scanf_s("%d", &size);
	p = (int*)malloc(size * sizeof(int));
	
	for (int i = 0; i < size; i++) {
		printf("%d번째 원소 입력: ", i);
		scanf_s("%d", &p[i]);
	}

	for (int i = 0; i < size; i++) {
		printf("p[%d] = %d\n", i, p[i]);
	}

	free(p);

	return 0;
}