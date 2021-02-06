//#include<iostream>
//using namespace std;
//void nhap(int a[], int n);
//void xuat(int a[], int n);
//void xoa(int a[], int n, int vitrixoa);
//void danhdau(int a[], int n );
//void mangmoi(int a[], int n);
//bool tim0(int a[], int n);
//int dem0(int a[], int n);
//
//int main()
//{
//	const int max = 100;
//	int a[max];
//	int n ;
//	cout << "chuong tinh xoa cac phan tu trung nhau \n";
//	do {
//		cout << "nhap so luong phan tu :";
//		cin >> n;
//		if (n < 0 || n > 100)
//			cout << "nhap sai vui long nhap lai :";
//	} while (n < 0 || n > 100);
//
//	nhap(a, n);
//	danhdau(a, n);
//
//	cout << "mang sau khi xoa la :\n";
//	int x = dem0(a, n);
//	//xoa het cac so 0 
//	do{
//		mangmoi(a, n);
//		dem0(a, n);
//	} while (tim0(a, n - dem0(a, n)) == true);
//
//	xuat(a, n - x);
//
//	cout << endl;
//	system("pause");
//	return 0;
//}
//
//void nhap(int a[], int n)
//{
//	for (int i = 0; i <= n - 1; i++)
//	{
//		cout << "a[" << i << "] = ";
//		cin >> a[i];
//	}
//}
//
//void xuat(int a[], int n)
//{
//	for (int i = 0; i <= n - 1 ; i++)
//		cout << a[i] << " ";
//	cout << endl;
//}
//
//void xoa(int a[], int n, int vitrixoa)
//{
//	for (int i = vitrixoa; i <= n - 1; i++)
//		a[i] = a[i + 1];
//	n--;
//}
//
////nhung phan tu duoc danh dau gan = 0
//void danhdau(int a[], int n)
//{
//	for (int j = 0; j <= n - 1; j++)
//	{
//		for (int i = j + 1; i <= n - 1; i++)
//		{
//			if (a[j] == a[i])
//				a[i] = 0;
//		}
//	}
//}
//
////ham loai bo so 0
//void mangmoi(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (a[i] == 0)
//			xoa(a, n, i);
//	}
//}
//
////ham tim so 0
//bool tim0(int a[], int n)
//{
//	for (int i = 0; i < n ; i++)
//		if (a[i] == 0)
//			return true;
//	return false;
//}
//
////dem so luong so 0
//int dem0(int a[], int n)
//{
//	int dem = 0;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		if (a[i] == 0)
//			dem++;
//	}
//			return dem;
//}