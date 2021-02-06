#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double banKinh, dienTich,chuVi;
	const double pi = 3.14;
	cout << "nhap vao ban kinh r:";
	cin >> banKinh;
	dienTich = pow(banKinh, 2) * pi;
	chuVi = 2 * pi * banKinh;
	cout << "dien tich cua hinh tron la: " << dienTich << endl;
	cout << "chu vi hinh tron la: "<< chuVi << endl;
	cout << "nhap vao dien tich cua hinh tron:";
	cin >> dienTich;
	banKinh = sqrt(dienTich / pi);
	cout << "ban kinh cua hinh tron la:" << banKinh << endl;
}