//#include <iostream>
//#include <math.h>
//using namespace std;
//int main() {
//	int n;
//	int s1 = 0;
//	double s2 = 0;
//	double s3 = 0;
//	do
//	{
//		cout << "nhap vao gia tri nguyen duong: ";
//		cin >> n;
//		if (n <= 0)
//			cout << "sai gia tri!" << endl;
//	} while (n <= 0);
//	// tinh s
//		cout << "1. S = 1^2 + 2^2 +....n^2" << endl;
//		cout << "2. S = 1 + 1/2 + 1/3 +..... 1/n" << endl;
//		cout << "3. S = 1 + 1/3 + 1/5 + .... 1/(2*n-1)" << endl;
//		cout << "chon phep tinh: ";
//		int phepTinh;
//		cin >> phepTinh;
//		if (phepTinh < 1 || phepTinh > 3)
//			cout << "nhap sai" << endl;
//		switch (phepTinh)
//		{
//		case 1: {
//			for (int i = 1; i <= n; i++) {
//				s1 = s1 + pow(i, 2);
//			
//			}
//			cout << "S1 = " << s1 << endl;
//			break;
//		}
//		case 2: {
//			for (int i = 1; i <= n; i++) {
//				s2 = s2 + (1.0 / i);
//			}
//			cout << "S2 = " << s2 << endl;
//			break;
//		}
//		case 3: {
//			for (int i = 1; i <= n; i++) {
//				s3 = s3 + (1.0 / ((2 * i) - 1));
//			}
//			cout << "S3 = " << s3 << endl;
//			break;
//		}
//		}
//	
//
//
//
//	system("pause");
//	return 0;
//
//}