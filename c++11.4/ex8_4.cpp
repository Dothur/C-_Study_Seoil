#include <iostream>
using namespace std;

class Base{
	public:
	int a;
	public:
	void setA(int a) {this-> a = a;}
	public:
	void showA() {cout << a << endl;}
};

class Derived : public Base {
	public:
	int b;
	public:
	void setB(int b) { this-> b = b;}
	public:
	void showB() {cout << b << endl;}
};
int main() {
	Derived x;
	x.a = 5;
	x.setA(10);
	x.showA();
	x.b=10;
	x.setB(10);
	x.showB();
}
