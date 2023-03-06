#include <iostream>
using namespace std;

class Shape {
	public:
		virtual void draw() {
			cout << "--Shape--";
		}
};
class Circe : public Shape {
	public:
		int x;
		virtual void draw() {
			Shape::draw();
			cout << "Circle" << endl;
		}
};
int main() {
	Circe circle;
	Shape *pShape = &circle;

	pShape -> draw();
	pShape -> Shape::draw();
}
