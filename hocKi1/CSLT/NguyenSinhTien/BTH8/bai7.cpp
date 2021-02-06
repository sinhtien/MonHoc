//#include<iostream>
//using namespace std;
//void nhap(int arr[], int arrSize);
//int tim(const int arr[], int arrSize, int x);
//int min(int arr[], int arrSize);
//
//int main()
//{
//	const int max = 100;
//	int arr[max];
//	int arrSize;
//	
//	cout << "nhap so luong phan tu :";
//	cin >> arrSize;
//
//	nhap(arr, arrSize);
//	min(arr, arrSize);
//	cout << "tim thay tai vi tri : " << tim(arr, arrSize, min(arr, arrSize));
//
//	cout << endl;
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
////tim vi tri cua min
//int tim(const int arr[], int arrSize, int x)
//{
//	for (int i = 0; i < arrSize; i++)
//		if (x == arr[i])
//		return i;
//}
//
////tim gia tri nho nhat
//int min(int arr[], int arrSize)
//{
//	int min = arr[0];
//	for (int i = 1; i < arrSize; i++)
//		min = min < arr[i] ? min : arr[i];
//	return min;
//}