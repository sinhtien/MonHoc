#include <iostream>
using namespace std;
int main(){
	int soSach,soTien;
	const int thue = 0.75;
	const int vanChuyen = 2000;
	cout << "nhap vao tong so sach: ";
	cin >> soSach;
	cout << "nhap vao tong so tien: ";
	cin >> soTien;
	double giaTri = soTien + (soTien * 0.75 ) + vanChuyen*soSach;
	cout << "tong gia tri don hang: " << giaTri << endl;
	system("pause");
	return 0;
}