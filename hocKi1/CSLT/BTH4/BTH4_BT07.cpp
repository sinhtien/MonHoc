//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main() {
//	int a, b,phepTinh;
//	char n;	
//	while(true)
//	{
//		cout << "1 phep cong" << endl;
//		cout << "2. phep tru" << endl;
//		cout << "3. phep nhan" << endl;
//		cout << "4. phep chia" << endl;
//		cout << "lua chon phep tinh:";
//		cin >> phepTinh;
//		if (phepTinh <= 0 || phepTinh > 4) {
//			system("cls");
//			cout << "nhap sai!" << endl;
//			continue;
//		}
//		cout << "nhap so nguyen thu nhat: ";
//		cin >> a;
//		cout << "nhap so nguyen thu hai: ";
//		cin >> b;
//		switch (phepTinh) {
//			case 1:
//				cout << a <<  " + " << b << " = " << a + b << endl;
//				break;
//			case 2:
//				cout << a << " - " << b << " = " << a - b << endl;
//				break;
//			case 3:
//				cout << a << " * " << b << " = " << a * b << endl;
//				break;
//			case 4: {
//				if (b != 0) {
//					cout << a << " / " << b << " = " <<setprecision(2) << double(a) / b << endl;
//				}
//				else
//					cout << "khong the chia cho khong:" << endl;
//				break;
//			}
//		}
//		cout << "ban muon tiep tuc y/n?: ";
//		cin >> n;
//		if (n == 'n')
//			break;
//		system("cls");
//	}
//	system("pause");
//	return 0;
//}
