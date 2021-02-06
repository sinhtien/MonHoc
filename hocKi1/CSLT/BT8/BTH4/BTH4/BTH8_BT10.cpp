////BAI10 - LAP 8
//#include<iostream>
//#include<string.h>
//using namespace std;
//int main()
//{
//	bool a[100];
//	int n;
//	do {
//		cout << "nhap so nguyen: ";
//		cin >> n;
//		if (n < 2)
//			cout << "nhapsai,nhap lai\n";
//	} while (n < 2);
//	memset(a, true, (n + 1));
//	for (int i = 2; i <= sqrt(n * 1.0); i++)
//	{
//		if (a[i] == true)
//		{
//			for (int j = i + i; j <= n; j += i)
//				a[j] = false;
//		}
//	}
//	cout << "cac so nguyen to tu 2 den " << n << " la: ";
//	for (int i = 2; i <= n; i++)
//	{
//		if (a[i] == true)
//			cout << i << " ";
//
//	}
//	return 0;
//}