/*
	2차원 배열
*/

#include <stdio.h>

int main()
{
	int ary[4] = { 1, 2, 3, 4 };

	int ary2[3][2] = { {1, 2}, {3, 4}, {5, 6} };
	int ary3[3][4] = { {1, 2}, {3, 4, 5}, {6, 7, 8, 9} };
	int ary4[3][2] = { 1, 2, 3, 4, 5, 6 };
	int ary5[][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d, ", ary2[i][j]);
		}
	}

	printf("\n");

	int score[4][3];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("성적을 입력해주세요");
			scanf_s("%d", &score[i][j]);
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d, ", score[i][j]);
		}
	}


	return 0;
}

// 국영수 입력받고 학생별로 총점과 평균 구하기. 4명, 3과목