//#include <iostream>
//using namespace std;
//int main() {
//	int a, b;
//	bool TF = true;
//	while (TF )    // bat buoc nhap dung phep tinh
//	{
//		cout << "nhap so nguyen thu nhat: ";
//		cin >> a;
//		cout << "nhap so nguyen thu hai: ";
//		cin >> b;
//		char n;	
//		cout << "nhap vao phep tinh tuong ung + , - , * , / , % , <,> ";
//		cout << " nhap n de ket thuc: " << endl;
//			cin >> n;
//		switch (n) {
//			case '+':
//				cout << a <<  " + " << b << " = " << a + b << endl;
//				break;
//			case '-':
//				cout << a << " - " << b << " = " << a - b << endl;
//				break;
//			case '*':
//				cout << a << " * " << b << " = " << a * b << endl;
//				break;
//			case '/': {
//				if (b != 0) {
//					cout << a << " / " << b << " = " << double(a) / b << endl;
//				}
//				else
//					cout << "khong the chia cho khong:" << endl;
//				break;
//			}
//			case '%':
//				cout << a << " % " << b << " = " << a % b << endl;
//				break;
//			case '<':
//				if (a < b)	{
//					cout << "True" << endl;
//					break;
//					}
//					else{
//						cout << "fale" << endl;
//						break;
//					}
//			case '>':
//				if (a > b)	{
//					cout << "True" << endl;
//					break;
//				}
//					else {
//
//						cout << "false" << endl;
//						break;
//					}
//			case 'n': {
//				TF = false;
//				break;
//			}
//
//			default:
//				cout << "gia tri khong hop le, vui long nhap lai: " << endl;
//				break;
//		}
//	}
//	system("pause");
//	return 0;
//}
