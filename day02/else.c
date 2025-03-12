#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++) {
		if (i % 2 == 0) continue;		// 건너뛴다.
		//if (i == 7) break;				// 반복문을 빠져나온다.
		if (i >= 7) break;
		printf("%d\n", i);
	}
	return 0;
}