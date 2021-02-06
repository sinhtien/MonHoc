#include <iostream>
using namespace std;
int main() {
	int a;
	cout << "nhap vao do dai canh a: ";
	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cout << "*  ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
