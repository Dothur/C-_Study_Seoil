#include <iostream>
using namespace std;

class Point{
	int x, y;
	public:
	void show(); //함수선언
	Point();
	Point(int a, int b);
};
void Point::show() {cout << "(" << x << "," << y << ")" << endl;}
//함수를 밖에서 구현해봄.

Point::Point() : Point(0, 0) {}
Point::Point(int a, int b) : x(a),y(b) {}

	int main() {
		Point origin;
		Point target(10,20);
		origin.show();
		target.show();
	}
