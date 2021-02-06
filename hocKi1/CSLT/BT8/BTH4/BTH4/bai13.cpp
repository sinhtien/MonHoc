//lab 8 bai 13
#include <iostream>
using namespace std;
const int MAXSIZE = 100;

void demTansuat(int a[], int b[], int n)
{
	bool flag = true;
	int dem = 0, tong = 0, x = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		if (tong <= n)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0)
				{
					if (a[i] == a[j])
					{
						dem++;
						b[x] = a[i];
						x++;
					}
				}
				else
				{
					for (int k = 0; k < x; k++)
						if (a[i] == b[k])
						{
							flag = false;
							break;
						}
						else
							flag = true;
					if (flag == true)
						if (a[i] == a[j])
							dem++;
				}
			}
			if (flag == true)
			{
				cout << a[i] << " xuat hien " << dem << " lan\n";
				tong += dem;
				b[x] = a[i];
				x++;
			}
		}
		else
			break;
		dem = 0;
	}
}
int main()
{
	int a[MAXSIZE], b[MAXSIZE], n;
	do {
		cout << "Nhap vao so phan tu cua mang: ";
		cin >> n;
		if (n < 0 || n > MAXSIZE)
			cout << "Nhap sai.nhap lai\n";
	} while (n < 0 || n > MAXSIZE);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu thu " << i + 1 << " la: ";
		cin >> a[i];
	}
	demTansuat(a, b, n);
	return 0;
}