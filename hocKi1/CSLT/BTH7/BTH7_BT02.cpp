//#include <iostream>
//using namespace std;
//int UCLN(int, int);
//int main() {
//	int m, n;
//	cout << "nhap vao so thu nhat: ";
//	cin >> m;
//	cout << "nhap vao so thu hai: ";
//	cin >> n;
//	cout << "UCLN: " << UCLN(n, m) << endl;
//	system("pause");
//	return 0;
//}
//int UCLN(int n, int m) {
//	int r,ucln;
//	if (n > m) {
//		int tam = n;
//		n = m;
//		m = tam;
//	}
//	while (true)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//		if (n == 0) {
//			ucln = m;
//			break;
//		}
//	}
//
//	return ucln ;
//}