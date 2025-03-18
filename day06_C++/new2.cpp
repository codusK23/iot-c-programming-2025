/*
	메모리 동적 할당 : new - delete
	자료형 포인터 = new자료형 (크기)
	new는 생성자를 호출한다. 즉 new는 객체를 생성시킨다.
	객체를 생성하기 위해서는 생성자 호출이 있어야 한다.
*/

#include <iostream>

int main() {
	
	int size;
	int* pary;

	//int *pn = new int;			//힙 영역에 int크기로 동적 할당을 받는다
	//delete pn;

	std::cout << "배열 크기를 입력하시오. >> ";
	std::cin >> size;

	pary = new int[size];
	pary[0] = 1;
	pary[1] = 2;
	*(pary + 2) = 3;

	std::cout << pary[0] << ", " << pary[1] << ", " << pary[2] << std::endl;
	delete[] pary;

	// 포인터 연산을 통해 값 넣기


	return 0;

}
