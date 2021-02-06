//#include <iostream>
//using namespace std;
//int main() {
//	int n1, n2;
//	do
//	{
//		cout << "nhap so thu nhat: ";
//		cin >> n1;
//		cout << "nhap so thu hai: ";
//		cin >> n2;
//		if (n1 > n2)
//			cout << "nhap sai( n1 < n2)" << endl;
//	} while (n1 > n2);
//
//	int tam = n1;
//	int dem = 0;
//
//	if (n1 < 2)
//		n1 = 2;
//
//	for ( tam; tam <= n2; tam++)
//	{
//		for (int i = 2; i < tam; i++) {
//			if( tam % i == 0)
//			{
//				dem++;
//				break;
//			}		
//
//		}
//	}
//	int soNguyen = (n2 - n1 + 1)- dem;
//	cout << "co " << soNguyen << " so nguyen to" << endl;
//	system("pause");
//	return 0;
//}