//#include <iostream>
//#include <string>
//using namespace std;
//bool kiemTraChu(char);
//bool kiemTraSo(char);
//int main() {
//	string str;
//	cout << "nhap chuoi:";
//	getline(cin, str);
//	int chu = 0;
//	int so = 0;
//		for (int i = 0; i < str.length(); i++) {
//			if (kiemTraChu(str[i]))
//				chu += 1;
//			 else if (kiemTraSo(str[i]))
//				so += 1;
//		}
//		cout << "chuoi co " << chu << "ky tu chu" << endl;
//		cout << "chuoi co " << so << "ky tu so" << endl;
//}
//bool kiemTraChu(char kyTu) {
//	int ascii = (int)kyTu;
//	if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
//		return true;
//	else
//		return false;
//}
//bool kiemTraSo(char kyTu) {
//	int ascii = (int)kyTu;
//	if (ascii >= 48 && ascii <= 57)
//		return true;
//	else
//		return false;
//}