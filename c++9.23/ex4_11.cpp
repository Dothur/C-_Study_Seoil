#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string address("수원시 권선구 권선동 900");
	string copyAddress(address);

	char text[] = {'L','o','v','e',' ','C','+','+','\0'};
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}
