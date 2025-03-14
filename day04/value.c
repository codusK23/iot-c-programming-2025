/*

*/

#include <stdio.h>

void incFunc(int);

int main() 
{
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		incFunc(cnt);
		printf("cnt: %d\n", cnt);
	}
	return 0;
}

void incFunc(int _cnt) 
{
	_cnt++;
}