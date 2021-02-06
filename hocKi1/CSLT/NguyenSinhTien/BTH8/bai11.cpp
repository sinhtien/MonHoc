//#include <iostream>
//using namespace std;
//void nhap(int a[], int n);
//void xuat(int a[], int n);
//void hoandoi(int& a, int& b);
//void xapxeptang(int a[], int n);
//
//int main()
//{
//	int const max = 100;
//	int a[max];
//	int n ;
//	do {
//		cout << "nhap so luong phan tu cua mang :";
//		cin >> n;
//		if (n < 0 || n > 100)
//			cout << "nhap sai vui long nhap lai :\n";
//	} while (n < 0 || n > 100);
//
//	nhap(a, n);
//	xapxeptang(a, n);
//
//	cout << "mang sau khi sap xep la : ";
//	xuat(a, n);
//
//	system("pause");
//	return 0;
//}
//
//void nhap(int a[], int n)
//{
//	for (int i = 0; i <= n - 1; i++)
//	{
//		cout << "a[" << i + 1 << "] = ";
//		cin >> a[i];
//	}
//}
//
//void xuat(int a[], int n)
//{
//	for (int i = 0; i <= n - 1; i++)
//	{
//		cout << a[i] << " ";
//	}
//}
//
//void hoandoi(int& a, int& b)
//{
//	int tam = a;
//	a = b;
//	b = tam;
//}
//
//void xapxeptang(int a[] , int n)
//{
//	for (int j = 0; j <= n - 1; j++)
//	{
//		for (int i = j + 1; i <= n - 1; i++)
//		{
//			if (a[j] > a[i])
//				hoandoi(a[j], a[i]);
//		}
//	}
//}