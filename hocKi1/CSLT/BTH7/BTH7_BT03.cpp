//#include <iostream>
//#include <iomanip>
//using namespace std;
//int giaiThua(int);
//int toHop(int, int);
//void vePascal(int);
//int main() {
//	cout << "+-----------+" << endl;
//	cout << "1. tinh n!" << endl;
//	cout << "2. tinh to hop n chap k" << endl;
//	cout << "3. in tam giac Pascal" << endl;
//	cout << "+-----------+" << endl;
//	int luaChon;
//	do
//	{
//		cout << "chon chuc nang: ";
//		cin >> luaChon;
//		if (luaChon < 1 || luaChon >3)
//			cout << "vui long chon lai!" << endl;
//		else
//			break;
//	} while (true);
//	switch (luaChon)
//	{
//	case 1: {
//		cout << "nhap n: "; 
//		int n;
//		cin >> n;
//		int gt = giaiThua(n);
//		cout << n << "! = " << gt;
//		break;
//	}
//	case 2: {
//		int n;
//		int k;
//		do
//		{
//			
//		cout << "nhap n: ";
//		cin >> n;
//		cout << "nhap k: ";
//		cin >> k;
//		if (n < k)
//			cout << "vui long nhap lai (n > k)" << endl;
//		else
//			break;
//		} while (true);
//		int th = toHop(n, k);
//		cout << n << "C" << k << " = " << th;
//		break;
//	}
//	case 3: {
//		int h;
//		cout << "nhap h: ";
//		cin >> h;
//		vePascal(h);
//		break;
//	}
//	}
//}
//int	giaiThua(int n) {
//	int gt = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		gt = gt * i;
//	}
//	return gt;
//}
//int toHop(int n, int k) {
//
//	int c = giaiThua(n) / (giaiThua(k) * giaiThua(n - k));
//	return c;
//}
//void vePascal(int so) {
//	// ve vien ngoai
//	cout << "k";
//	for (int i = 0; i <= so; i++) {
//		cout << setw(3) << i;
//		cout << " ";
//	}
//	cout << endl;
//	for (int i = 0; i <= so; i++)
//		cout << "--------";
//	cout << endl;
//	cout <<"n";
//	// ve pascal
//	for (int n = 0; n < so; n++) {
//		cout <<setw(3) << n << "|";
//		for (int k = 0; k < (n+1); k++) {
//			cout <<setw(4) <<  toHop(n, k);
//		}
//		cout << endl;
//		cout << " ";
//	}
//}