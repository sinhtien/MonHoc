#include <iostream>
using namespace std;
int sVuong(int);
int cVuong(int);
void veVuong(int);
int main() {
	int canh;
	do
	{
		cout << "nhap canh hinh vuong: ";
		cin >> canh;
	} while (canh <= 0);
	//
	cout << "+---------------+" << endl;
	cout << "1.tinh dien tich" << endl;
	cout << "2. tinh chu vi" << endl;
	cout << "3. ve hinh" << endl;
	cout << "+---------------+" << endl;
	cout << "chon chuc nang: ";
	int chuNang;
	cin >> chuNang;
	switch (chuNang)
	{
	case 1: {
		cout << "ket qua: " << sVuong(canh) << endl;
		break;
	}case 2: {
		cout << "ket qua: " << cVuong(canh) << endl;
		break;
	} case 3: {
		veVuong(canh);
		break;
	}
	default: {
		cout << "nhap sai " << endl;
		break;
	}
	}
	system("pause");
	return 0;
}int sVuong(int canh) {
	int s = canh * canh;
	return s;
}
int cVuong(int canh) {
	int c = canh * 4;
	return c;
}
void veVuong(int canh) {
	for (int i = 0; i < canh; i++)
	{
		for (int j = 0; j < canh; j++) {
			if (i == 0 || i == canh - 1 || j == 0 || j == canh - 1
				)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;

	}
}