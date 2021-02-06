//#include <iostream>
//using namespace std;
//int max2(int, int);
//int max3(int, int,int);
//int main() {
//	cout << "+----------------+" << endl;
//	cout << "1. so sanh 2 so" << endl;
//	cout << "2. so sanh 3 so" << endl;
//	cout << "+----------------+" << endl;
//	cout << "chon chuc nang: ";
//	int chucNang;
//	cin >> chucNang;
//		switch (chucNang)
//		{
//		case 1: {
//			int a, b;
//			cout << "nhap so thu nhat: ";
//			cin >> a;
//			cout << "nhap so thu hai : ";
//			cin >> b;
//			cout << "max = " << max2(a, b) << endl;
//			break;
//		}
//		case 2: {
//			int a, b, c;
//			cout << "nhap so thu nhat : ";
//			cin >> a;
//			cout << "nhap so thu hai: ";
//			cin >> b;
//			cout << "nhap so thu ba: ";
//			cin >> c;
//			cout << "max = " << max3(a, b, c) << endl;
//			break;
//		}
//		default: {
//			cout << "nhap sai!\n";
//			break;
//		}
//		}
//
//	system("pause");
//	return 0;
//}
//int max2(int a, int b) {
//	if (a > b)
//		return a;
//		return b;
//}
//int max3(int a, int b, int c) {
//	return a > b ? a : (b > c ? b : c);
//}
