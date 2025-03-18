#include <stdio.h>	// 헤더파일 .h -> stdio.h라는 헤더파일을 포함해라!

// 함수 정의
/* 출력 함수이름(입력) */
int main(void)					// 함수: 이름 뒤에 괄호가 있으면 무조건 함수다. 메인함수 운영체제가 호출함
{									// void main() -> 반환 값 X, int main(void) -> 입력 값 X
	printf("Hello World!!");	// 함수호출

	return 0;						// 출력

}

// 1. 함수 선언, 2. 함수 정의, 3. 함수 호출