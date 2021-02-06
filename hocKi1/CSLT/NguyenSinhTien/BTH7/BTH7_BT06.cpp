//#include <iostream>
//using namespace std;
//void menu();
//void thucHien(int, int, int);
//int cong(int a, int b);
//int tru(int, int);
//int nhan(int, int);
//double chia(int, int);
//int main() {
//	menu();
//	do
//	{
//		int luaChon;
//		// lua chon chuc nang tu 1 den 4
//		do {
//			cout << "chon chu nang: ";
//			cin >> luaChon;
//			if (luaChon < 1 || luaChon > 4)
//				cout << "nhap sai!" << endl;
//			else
//				break;
//		} while (true);
//		// nhap hai so nguyen
//		cout << "nhap a: ";
//		int a;
//		cin >> a;
//		cout << "nhap b:";
//		int b;
//		cin >> b;
//		thucHien(luaChon, a, b);
//		cout << "TIEP TUC C/K ";
//		char ck;
//		cin >> ck;
//		if (ck == 'k' ||ck== 'K')
//			break;
//	} while (true);
//	system("pause");
//	return 0;
//}
//void menu() {
//	cout << "+----------+" << endl;
//	cout << "1. cong" << endl;
//	cout << "2. Tru " << endl;
//	cout << "3. Nhan" << endl;
//	cout << "4. Chia" << endl;
//	cout << "+----------+" << endl;
//}
//// thuc hien chuc nang da chon tu menu
//void thucHien(int chuNang, int a, int b) {
//	double ketQua;
//	switch (chuNang)
//	{
//	case 1: {
//		ketQua = cong(a, b);
//		cout << a << "+" << b << " = " << ketQua << endl;
//		break;
//	}
//	case 2: {
//		ketQua = tru(a, b);
//		cout << a << "-" << b << " = " << ketQua << endl;
//		break;
//	}
//	case 3: {
//		ketQua = nhan(a, b);
//		cout << a << "*" << b << " = " << ketQua << endl;
//		break; }
//	case 4: {
//		if (b == 0)
//			cout << "khong the chia cho 0" << endl;
//		else
//		{
//			ketQua = chia(a, b);
//		cout << a << "/" << b << " = " << ketQua << endl;
//		}
//	}
//	}
//
//}
//int cong(int a, int b) {
//	return a + b;
//}
//int tru(int a, int b) {
//	return a - b;
//}
//int nhan(int a, int b)
//{
//	return a * b;
//}
//double chia(int a, int b) {
//	return double(a) / b;
//}