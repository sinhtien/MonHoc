#include <iostream>
using namespace std;
int main() {
	int n,so;
	int	tong = 0;
	
	cout << "Ban can bao nhieu so: ";
	cin >> n;
	for (int i = 1; i <= n; i++ )
	{
		cout << "nhap vao so thu " << i << ": ";
		cin >> so;
		tong = tong + so;
		cout << endl;
	}
	cout << "tong " << n << " so vua nhap: " << tong << endl;
	system("pause");
	return 0;
}