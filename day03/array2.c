#include <stdio.h>

int main()
{
	int ary[] = { 1, 2, 3 };

	printf("배열의 전체크기: %d\n", sizeof(ary));
	printf("배열 방한개의 크기: %d\n", sizeof(ary[0]));
	printf("배열 방의 갯수: %d\n", sizeof(ary) / sizeof(ary[0]));
	printf("배열 이름: %p\n", ary);
	printf("배열의 첫번째방 주소: %p\n", &ary[0]);
	printf("배열의 두번째방 주소: %p\n", ary + 1);
	printf("배열의 두번째방 주소: %p\n", &ary[1]);

	int score[5];
	int num = sizeof(score) / sizeof(score[0]);
	int sum = 0;

	for (int i = 0; i < num; i++) {
		printf("성적을 입력해주세요: ");
		scanf_s("%d", &score[i]);
		sum += score[i];
	}

	printf("성적의 총 합은 %d점입니다.", sum);
	printf("성적의 평균은 %d점입니다.", (sum / num));

	return 0;
}