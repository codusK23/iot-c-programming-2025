#include <stdio.h>

void printAry(int* p_ary, int _size);
void inputAry();

int main()
{
	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int ary2[] = { 1, 2, 3 };

	int ary3[5];
	int size = sizeof(ary3) / sizeof(ary3[0]);

	inputAry(ary3, size);
	printAry(ary3, size);
	
	return 0;
}

void printAry(int* p_ary, int _size) {
	for (int i = 0; i < _size; i++) {
		printf("ary[%d]: %d\n", i, p_ary[i]);
	}
}

void inputAry(int* p_ary, int _size) {
	for (int i = 0; i < _size; i++) {
		printf("array[%d]값을 입력해주세요: ", i);
		scanf_s("%d", (p_ary + i));
		//printf("array[%d]: %d\n", i, *(p_ary + i));
	}
}
