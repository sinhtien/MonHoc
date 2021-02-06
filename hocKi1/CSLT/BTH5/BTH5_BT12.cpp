//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main() {
//	int h;
//	do
//	{
//		cout << "nhap chieu cao: ";
//		cin >> h;
//		if (h <= 0)
//			cout << "nhap sai! (h > 0)" << endl;
//	} while (h <= 0);
//	// hinh 1
//	for (int i = 1; i <= h; i++)
//	{
//		for (int j = 1; j <= h; j++)
//		{
//			if (j == i || i == h || j == 1  )
//				cout << " *";
//			else
//				cout << "  ";
//		}
//		cout << endl ;
//	}
//	cout << endl << "-----10d----------10d-----" << endl;
//	// hinh 2
//	for (int i = h; i > 0; i--)
//	{
//		for (int j = 1 ; j <= h; j++) {
//			if (j - i >= 0)
//				cout << " *";
//			else
//				cout << "  ";
//		}
//		cout << endl;
//	}
//	cout << "-----10d----------10d-----" << endl;
//	// hinh 3
//	for (int i = h; i > 0; i--)
//	{
//		for (int j = 1 ; j <= h; j++) {
//			if (i - j >= 0)
//				cout << " *";
//			else
//				cout << "  ";
//		}
//		cout << endl;
//	}
//	cout << "-----10d----------10d-----" << endl;
//	// hinh 4
//	for (int i = 1; i <= h; i++)
//	{
//		for (int j = 1; j <= h; j++) {
//			if (i == 1 ||  j-i >= 0 )
//				cout << "* ";
//			else
//				cout << "  ";
//		}
//		cout << endl;
//	}
//	cout << "-----10d----------10d-----" << endl;
//	// hinh 5
//	//for (int i = h; i > 0; i--)
//	//{
//	//	for (int j = 1; j <= h; j++) {
//	//		if (j - i >= 0)
//	//			cout << "* ";
//	//		else
//	//			cout << " ";
//	//	}
//	//	cout << endl;
//	//}
//	for (int i = 1; i <= h ; i++)
//	{
//		cout << setw(h - i);
//		for (int j = 1; j <= i; j++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}