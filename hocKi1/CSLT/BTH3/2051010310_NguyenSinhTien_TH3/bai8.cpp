//#include <iostream>
//using namespace std;
//int main() {
//	int year, month;
//	cout << "nhap vao so nam: ";
//	cin >> year;
//	cout << "nhap vao so thang: ";
//	cin >> month;
//	switch (month) {
//		case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
//			cout << "so ngay cua thang " << month << " nam " << year << "la 31 ngay" << endl;
//			break;
//	}
//		case 4: case 6: case 9: case 11: {
//			cout << "so ngay cua thang " << month << " nam " << year << "la 30 ngay" << endl;
//			break;
//	}
//		case 2: {
//			if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//			cout << "so ngay cua thang " << month << " nam " << year << "la 29 ngay" << endl;
//				else
//			cout << "so ngay cua thang " << month << " nam " << year << "la 28 ngay" << endl;
//	}
//		default:
//			cout << "ko hop le: " << endl;
//	}
//	system("pause");
//	return 0;
//}