#include <iostream>
using namespace std;
int main() {
	double dienTich,chieuCao, dayLon, dayNho;
	cout << "tinh dien tich hinh thang" << endl;
	cout << "nhap vao chieu cao cua hinh thang: ";
	cin >> chieuCao;
	cout << "nhap vao do dai day lon: ";
	cin >> dayLon;
	cout << "nhap vao do dai day nho:";
	cin >> dayNho;
	dienTich = chieuCao * ((dayNho+ dayLon) / 2);
	cout << "dien tich cua hinh thang la:" << dienTich << endl;
	system("pause");
	return 0;
}