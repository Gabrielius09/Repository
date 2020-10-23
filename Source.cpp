#include <iostream>
using namespace std;
void Rikiuoti(int a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[j] > a[i])
				swap(a[j], a[i]);
}
int ArSkirtingi(int n, int a[])
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j] && a[i] == a[j + 1])
				return k = 3;
		}
	}
}
int main()
{
	int n, a[10], k;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	Rikiuoti(a, n);
	k = ArSkirtingi(n, a);
	if (k >= 3)
		cout << "TAIP" << endl;
	else
		cout << "NE" << endl;
}