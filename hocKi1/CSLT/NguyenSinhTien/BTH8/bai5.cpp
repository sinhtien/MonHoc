//#include <iostream>
//using namespace std;
//#define max 100
//void nhap(int arr[], int arrSize);
//void xuat(const int arr[], int arrSize);
//void xoa(int arr[], int& arrSize, int p);
//
//int main()
//{
//	int vitrixoa ,n;
//	int arr[max];
//
//	cout << "nhap so luong phan tu :";
//	cin >> n;
//	nhap(arr, n);
//
//	cout << " nhap vao vi tri can xoa :";
//	cin >> vitrixoa;
//	xoa(arr, n, vitrixoa);
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
//		cout << "a[" << i << "] = " << arr[i] << endl;
//	}
//}
//void xoa(int arr[], int& arrSize, int p)
//{
//	if (p >= 0 && p < arrSize)
//	{
//		for (int i = p + 1; i < arrSize; i++)
//		{
//			int truoc_i = i - 1;
//			arr[truoc_i] = arr[i];
//		}
//		arrSize--;
//		cout << "mang sau khi xoa tai vi tri " << p << endl;
//		xuat(arr, arrSize);
//	}
//	else
//		cout << "nam ngoai pham vi !!!\n";
//}