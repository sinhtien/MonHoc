#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << "nhap vao chuoi s: ";
	getline(cin, s);
	cout << "do dai cua chuoi la:" << s.length() << endl;
	system("pause");
	return 0;
}