/*
*/

#include <iostream>


class AClass {
private:
	int n1;
	int n2;
public:
	void setData(int a, int b){
		n1 = a;
		n2 = b;
	}
	void getData(){
		std::cout << "나는 AClsss의 인스턴스입니다." << std::endl;
		std::cout << "n1: " << n1 << ", n2: " << n2 << std::endl;
	}
};

int main() {

	AClass obj;
	obj.setData(3, 7);
	obj.getData();

	return 0;
}
