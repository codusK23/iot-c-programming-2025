/*
	vector
*/
#include <iostream>
#include <vector>				// vector ������� ����

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

	for (auto i : v3) {				// ���� ��� for�� - �ε��� ����� �Ұ�
		//std::cout << v3[i] << std::endl;
		std::cout << i << std::endl;
	}

	/* begin()�� end()�� iterator(�ݺ���) Ÿ���� ��ȯ�ϴ�. (������) */
	std::cout << "v3�� ù��° ��Ұ�: " << *v3.begin() << std::endl;
	std::cout << "v3�� ù��° ��Ұ�: " << *(v3.end() - 1) << std::endl;

	return 0;
}

/*
vector.size: ���� ũ��(����)�� ��ȯ
vector.begin(): ù��° �ּҸ� ��ȯ
vector.end(): �������� ���� �ּҸ� ��ȯ
*/