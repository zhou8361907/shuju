#include<iostream>
using namespace std;

int main()
{
	int n=0;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

	}
	int count = 0;
	for (int i = 0; i < n;i++)
	for (int j = i; j < n; j++)
	{
		int t = a[i];
		t = t - a[j];
		if (t == 1 || t == -1)
			count++;
	}
	cout << count;
}