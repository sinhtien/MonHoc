#include <iostream>
using namespace std;
int hoanDoi(int&, int&);
int sapXep2So(int& a, int& b);
int sapXepTang3So(int& a, int& b, int& c);
int sapXepGiam3So(int& a, int& b, int& c);
int main() {
	cout << "+-----------+" << endl;
	cout << "1. sap xep tang dan 2 so" << endl;
	cout << "2.sap xep tang dan 3 so" << endl;
	cout << "3. sap xep giam dan 3 so" << endl;
	cout << "+------------+" << endl;
	int chon;
	do
	{
		cout << "chon chuc nang: ";
		cin >> chon;
		if (chon < 1 || chon > 3)
			cout << "nhap sai" << endl;
		else
			break;
	} while (true);
	switch (chon)
	{
	case 1: {
		int a;
		int b;
		cout << "nhap a: ";
		cin >> a;
		cout << "nhap b:";
		cin >> b;
		sapXep2So(a, b);
		cout << a << "\t" << b << endl;
		break;
	}
	case 2: {
		int a;
		int b;
		cout << "nhap a: ";
		cin >> a;
		cout << "nhap b:";
		cin >> b;
		cout << "nhap c: ";
		int c;
		cin >> c;
		sapXepTang3So(a, b, c);
		cout << a << "\t" << b << "\t" << c << endl;
		break;
	}
	case 3: {
		int a;
		int b;
		cout << "nhap a: ";
		cin >> a;
		cout << "nhap b:";
		cin >> b;
		cout << "nhap c: ";
		int c;
		cin >> c;
		sapXepGiam3So(a, b, c);
		cout << a << "\t" << b << "\t" << c << endl;
		break;
	}
	}
	system("pause");
	return 0;
}
int hoanDoi(int& a, int& b) {
		int tam = b;
		b = a;
		a = tam;
		return 0;
	}
int sapXep2So(int& a, int& b) {
	if (a > b) {
		hoanDoi(a, b);
	}
	return 0;
}
int sapXepTang3So(int& a, int& b, int& c) {
	if (a > b)
		hoanDoi(a, b);
	if (b > c)
		hoanDoi(b, c);
	return 0;
}
int sapXepGiam3So(int& a, int& b, int& c) {
	if (a < b)
		hoanDoi(a, b);
	if (b < c)
		hoanDoi(b, c);
	return 0;
}
