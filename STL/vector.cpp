/*
	vector
*/
#include <iostream>
#include <vector>				// vector 헤더파일 포함

int main() {

	std::vector<int> v;
	std::vector<int> v1{ 10 };
	std::vector<int> v2(5);
	std::vector<int> v3 = { 1, 2, 3, 4, 5 };

	std::cout << "v size: " << v.size() << std::endl;
	std::cout << "v1 size: " << v1.size() << std::endl;
	std::cout << "v2 size: " << v2.size() << std::endl;
	std::cout << "v3 size: " << v3.size() << std::endl;

	for (int i = 0; i < 5; i++) {			
		printf("v2[%d}: %d		", i, v2[i]);
		// std::cout v3[i] << endl;
	}

	std::cout << std::endl;

	for (auto i : v3) {				// 범위 기반 for문 - 인덱스 사용이 불가
		//std::cout << v3[i] << std::endl;
		std::cout << i << std::endl;
	}

	/* begin()과 end()는 iterator(반복자) 타입을 반환하다. (포인터) */
	std::cout << "v3의 첫번째 요소값: " << *v3.begin() << std::endl;
	std::cout << "v3의 첫번째 요소값: " << *(v3.end() - 1) << std::endl;

	return 0;
}

/*
vector.size: 원소 크기(갯수)를 반환
vector.begin(): 첫번째 주소를 반환
vector.end(): 마지막의 다음 주소를 반환
*/