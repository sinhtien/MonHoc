//#include <iostream>
//using namespace std;
//
//void xoa(int a[], int& n, int p)
//{
//	for (int i = p; i < n - 1; i++)
//		a[i] = a[i + 1];
//	n--;
//}
//void xoaTrung(int a[], int& n)
//{
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (j = i + 1; j < n; j++)
//			if (a[i] == a[j])
//				xoa(a, n, j);
//		//j--;
//	}
//	
//}
//int main()
//{
//	const int MAXSIZE = 100;
//	int a[MAXSIZE];
//	int n;
//	cout << "Nhap so phan tu cua mang: ";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Nhap phan tu thu " << i + 1 << " la: ";
//		cin >> a[i];
//	}
//	xoaTrung(a, n);
//	cout << "Mang sau khi xoa trung la: ";
//	for (int i = 0; i < n; i++)
//		cout << a[i] << "  ";
//	cout << endl;
//	return 0;
//}
