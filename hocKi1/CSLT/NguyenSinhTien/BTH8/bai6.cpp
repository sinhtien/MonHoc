//#include<iostream>
//using namespace std;
//#define max 100
//void nhap(int arr[], int arrSize);
//void xuat(const int arr[], int arrSize);
//bool tim(const int arr[], int arrSize, int x);
//void daonguoc(int arr[], int arrSize);
//void xoa(int arr[], int& arrSize, int p);
//
//int main()
//{
//	int arr[max];
//	int arrSize , y;
//	cout << "nhap so luong phan tu :";
//	cin >> arrSize;
//	if (arrSize > 0)
//	{
//		cout << "a.  nhap mang ---------------------------\n";
//		nhap(arr, arrSize); cout << endl;
//
//		cout << "b.  xuat mang ---------------------------\n";
//		xuat(arr, arrSize); cout << endl;
//
//		cout << "c.  tim kiem gia tri trong mang ---------\n";
//		cout << "nhap gia tri can tim trong mang :";
//		cin >> y;
//
//		if (tim(arr, arrSize, y) == true)
//			cout << "co\n";
//		else
//			cout << "khong co\n";
//
//		cout << "d.  mang sau khi dao nguoc -------------\n";
//		daonguoc(arr, arrSize);
//		xuat(arr, arrSize); cout << endl;
//
//		cout << "nhap vi tri can xoa trong mang :";
//		cin >> y; cout << endl;
//		xoa(arr, arrSize, y);
//	}
//	else
//		cout << "loi gia tri!!!\n";
//
//	system("pause");
//	return 0;
//}
//
//void nhap(int arr[], int arrSize)
//{
//	for (int i = 0; i < arrSize; i++)
//	{
//		cout << "a[" << i << "] = ";
//		cin >> arr[i]; cout << endl;
//	}
//}
//
//void xuat(const int arr[], int arrSize)
//{
//	for (int i = 0; i < arrSize; i++)
//	{
//		cout << "a[" << i << "] = " << arr[i] << " , ";
//	}
//	cout << endl;
//}
//
//bool tim(const int arr[], int arrSize, int x)
//{
//	for (int i = 0; i < arrSize; i++)
//		if (x == arr[i])
//			return true;
//	return false;
//}
//
//void daonguoc(int arr[], int arrSize)
//{
//	for (int i = 0; i < arrSize / 2 ; i++)
//	{
//		int tam = arr[i];
//		arr[i] = arr[arrSize - i - 1];
//		arr[arrSize - i - 1] = tam;
//	}
//}
//
//void xoa(int arr[], int& arrSize, int p)
//{
//	if (p >= 0 && p < arrSize)
//	{
//		daonguoc(arr, arrSize);
//		for (int i = p + 1; i < arrSize; i++)
//		{
//			int truoc_i = i - 1;
//			arr[truoc_i] = arr[i];
//		}
//		arrSize--;
//		cout << "e.  xoa mot vi tri trong mang ----------\n";
//		xuat(arr, arrSize);
//	}
//	else
//		cout << "nam ngoai pham vi !\n";
//}
