//#include <iostream>
//using namespace std;
//int soNgayTrongThang(int, int);
//int soNgay(int, int,int);
//int main() {
//	int ngay, thang, nam;
//	cout << "nhap Ngay Thang Nam: ";
//	cin >> ngay >> thang >> nam;
//	cout << "ket Qua: " << soNgay(ngay, thang, nam) << endl;
//	system("pause");
//	return 0;
//}
// tra ve so ngay trong thang
//int soNgayTrongThang( int thang, int nam) {
//	switch (thang)
//	{
//	case 4: case 6: case 9: case 11: {
//		return 30;
//	
//	}
//	case 2: {
//		if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
//			return 29;
//		else
//			return 28;
//	}
//	default:{
//		return 31;
//	}
//		
//	}
//}
//int soNgay(int ngay, int thang, int nam) {
//	int tongNgay = 0;
//	for (int i = 1; i < thang; i++) {
//		tongNgay = soNgayTrongThang(i, nam) + tongNgay;
//	}
//	return tongNgay + ngay;
//}