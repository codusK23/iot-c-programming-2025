/*
	객체를 더하는 함수 : add()
	참조를 리턴한다.
*/

#include <iostream>

class Point {
private:
	int x, y;

public:
	Point(int ax=0, int ay=0) :x(ax), y(ay){ std::cout << "Constructor\n" << std::endl; }

	Point(const Point& p) {
		std::cout << "Copy Constructor\n" << std::endl;
		x = p.x;
		y = p.y;
	}

	const Point& add(const Point & other) {
			std::cout << "===add()===" << std::endl;
			//return Point(x + other.x, y + other.y);
			// 참조로 리턴한다.
			x = other.x;
			y = other.y;
			return *this;
	}

	void showPoint() {
			std::cout << "x: " << x << ", y: " << y << std::endl;
	}
};

int main() {

	Point obj(10, 20);
	Point obj2(30, 40);

	std::cout << "==========================" << std::endl;

	/*
	Point obj3;
	obj3 = obj.add(obj2);
	*/

	Point obj3 = obj.add(obj2);
	obj3.showPoint();

	return 0;
}