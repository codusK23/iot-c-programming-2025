/*
*/

#include <iostream>
#include <vector>				

int main() {
	std::vector<int> v;
	std::cout << "[ v[i], v.size(), v.capacity() ]" << std::endl;
	
	
	for (int i = 0; i <= 32; i++) {
		v.push_back(i + 1);
		std::cout << "[" << v[i] << ", " << v.size() << ", " << v.capacity() << "]" << std::endl;
	}
	

	std::vector<int> v2;
	v2.push_back(10);
	v2.push_back(11);
	v2.push_back(12);
	v2.push_back(13);
	v2.insert(v2.begin(), 1);
	v2.insert(find(v2.begin(), v2.end(), 13), 20);

	for (auto i : v2) {
		std::cout << i << std::endl;
	}
	
	v2.pop_back();		// ������ ���� ����
	for (auto i : v2) {
		std::cout << i << std::endl;
	}

	return 0;
}
/*
	v.push_pack(10): ������ ���� �ڿ� 10�� �߰��Ѵ�.
	v.insert(idx, val): idx��° ��ġ�� val�� �ִ´�.
	v.capacity(): ���Ϳ� �Ҵ�� �޸� ũ�⸦ �����Ѵ�. - v.size()�ʹ� �ٸ�

*/
