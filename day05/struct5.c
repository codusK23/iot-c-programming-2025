/*

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct vision {
	double left;
	double right;
} Vision;

//class vision {
//	double left;
//	double right;
//	void move() {};
//}

Vision exchange(Vision);		// 함수 원형

int main() {
	Vision rot;
	printf("왼쪽 시력 입력>> ");
	scanf("%lf", (& rot.left));

	printf("오른쪽 시력 입력>> ");
	scanf("%lf", (& rot.right));

	rot = exchange(rot);

	printf("바뀐 시력>> 왼쪽: %.1lf, 오른쪽: %.1lf\n", rot.left, rot.right);

	return 0;
}

Vision exchange(Vision v) {
	Vision temp;
	temp.left = v.right;
	temp.right = v.left;
	return temp;
}