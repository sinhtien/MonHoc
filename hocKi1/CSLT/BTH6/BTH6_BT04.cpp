//#include <iostream>
//using namespace std;
//int xichMa(int);
//int giaiThua(int);
//int main() {
//	int n;
//	do
//	{
//		cout << "nhap n: ";
//		cin >> n;
//		if (n <= 0)
//			cout << "sai! nhap lai (n>0)" << endl;
//	} while (n <= 0);
//	//
//	int chucNang;
//	cout << "+-----------+" << endl;
//	cout << "1. tinh tong tu 1 den n" << endl;
//	cout << "2. tinh giai thua" << endl;
//	cout << "+-----------+" << endl;
//	cout << "chon chuc nang: ";
//	cin >> chucNang;
//	switch (chucNang)
//	{
//	case 1: {
//		cout << "ket qua: " << xichMa(n) << endl;
//		break;
//	} 
//	case 2: {
//		cout << "ket qua: " << giaiThua(n) << endl;
//		break;
//	}
//	default: {
//		cout << "nhap sai\n";
//		break; 
//	}
//	}
//	system("pause");
//	return 0;
//}
//int xichMa(int n) {
//	int tong = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		tong = tong + i;
//	}
//	return tong;
//}
//int giaiThua(int n) {
//	int gt = 1;
//	for (int i = 1; i <= n ; i++)
//	{
//		gt = gt * i;
//	}
//	return gt;
//}
//
