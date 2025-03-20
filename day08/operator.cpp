/*
	연산자 오버로딩(다중정의)
*/

#include <iostream>

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x{ ax }, y(ay) {
		std::cout << "===Constructor Call===" << std::endl;
	}

	void showPoint() {
		std::cout << "x: " << x << ", y: " << y << std::endl;
	}

	Point add(Point& p) {
		printf("===add() Call===\n");
		return Point(x + p.x, y + p.y);
	}
};

int main() {

	Point obj(10, 20);
	obj.showPoint();

	Point obj2(30, 40);
	obj2.showPoint();

	Point obj3;
	obj3 = obj.add(obj2);
	obj3.showPoint();

	return 0;
}