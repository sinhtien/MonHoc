//#include<iostream>
//using namespace std;
//void nhap(int a[], int n);
//int tinhgiatri(const int a[], int n, int x);
//
//int main()
//{
//	const int max = 100;
//	int a[max];
//	int n , x;
//	cout << "a[n] * x^n + a[n - 1] * x^(n - 1) + ... + a[0]\n";
//
//	//nhap cac gia tri a ,x ,n
//	cout << "nhap so bac n cua da thuc :";
//	cin >> n;
//	nhap(a, n);
//	cout << "nhap gia tri x :";
//	cin >> x;
//
//	cout << "gia tri cua bieu thuc tren la : " << tinhgiatri(a, n, x);
//
//	cout << endl;
//	system("pause");
//	return 0;
//}
//
//void nhap(int a[], int n)
//{
//	for (int i = n; i >= 0; i--)
//	{
//		cout << "nhap a[" << i << "] = ";
//		cin >> a[i]; cout << endl;
//	}
//}
//
////tinh gia tri bieu thuc
//int tinhgiatri(const int a[], int n, int x)
//{
//	double tong = 0;
//	for (int i = 0; i <= n; i++)
//	{
//		tong += a[i] * pow(x, i);
//	}
//			return tong;
//}
