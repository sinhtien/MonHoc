//#include<iostream>
//using namespace std;
//void nhap(int a[], int n);
//void xuat(int a[], int n);
//void xoa(int a[], int n, int vitrixoa);
//void danhdau(int a[], int n , int p);
//void mangmoi(int a[], int n);
//bool tim0(int a[], int n);
//int dem0(int a[], int n);
//
//int main()
//{
//	const int max = 100;
//	int a[max];
//	int n ;
//	cout << "chuong tinh xuat cac so nguyen to tu 2 den n \n";
//	do {
//		cout << "nhap n :";
//		cin >> n;
//		if (n < 2 || n > 100)
//			cout << "nhap sai vui long nhap lai :";
//	} while (n < 2 || n > 100);
//
//	nhap(a, n);
//	for (int i = 0; i < (n - 1) / 2; i++)
//	{
//		int p = a[i];
//		danhdau(a, n ,p);
//	}
//
//	cout << "cac so nguyen to tu 2 den n la :\n";
//	int x = dem0(a, n);
//	//xoa het cac so 0 va xuat mang sau khi xoa
//	do{
//		mangmoi(a, n);
//		dem0(a, n);
//	} while (tim0(a, n - dem0(a, n)) == true);
//	xuat(a, n - x);
//
//	cout << endl;
//	system("pause");
//	return 0;
//}
////khoi tao mang tu 2 den n
//void nhap(int a[], int n)
//{
//	int x = 2;
//	for (int i = 0; i < n - 1; i++)
//	{
//		a[i] = x;
//		x++;
//	}
//}
//
//void xuat(int a[], int n)
//{
//	for (int i = 0; i < n - 1 ; i++)
//	{
//		cout << "  " << a[i];
//	}
//}
//
//void xoa(int a[], int n, int vitrixoa)
//{
//	for (int i = vitrixoa; i < n - 1; i++)
//		a[i] = a[i + 1];
//	n--;
//}
//
////nhung phan tu duoc danh dau gan = 0
//void danhdau(int a[], int n , int p)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		if ((i + 2) * p > n)
//			break;
//		else
//		{
//			for (int j = 0; j < n - 1; j++)
//			{
//				if ((i + 2) * p == a[j])
//				{
//					a[j] = 0;
//					break;
//				}
//			}
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
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (a[i] == 0)
//			dem++;
//	}
//			return dem;
//}