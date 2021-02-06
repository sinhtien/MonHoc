#include<iostream>
using namespace std;
void nhap(int a[], int n);
void xuat(int a[], int n);
int demphantu(int a[], int n , int x);

int main()
{
	const int max = 100;
	int a[max];
	int b[max] = { 0 };
	int n;
	// khoi tao mang b la 0
	/*for (int i = 0; i <= 99; i++)
		b[i] = 0;*/

	cout << "nhap so luong phan tu cua mang \n";
	cin >> n;

	nhap(a, n);
	for (int i = 0; i <= n - 1; i++)
		b[a[i]] = demphantu(a, n, a[i]);

	for (int i = 0; i <= 99; i++)
	{
		if (b[i] > 0)
			cout << "so " << i << " xuat hien " << b[i] << " lan\n";
	}
	system("pause");
	return 0;
}

void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

int demphantu(int a[], int n , int x)
{ 
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (x == a[i])
			dem++;
	}
	return dem ++;
}
