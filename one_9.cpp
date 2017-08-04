#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

	}
	int t=0;
	int max=0;
	for (int i = 1; i < n; i++){
		
			t = a[i] - a[i-1];
			if (t < 0)
				t *= -1;
			if (max < t)
				max = t;
		
	}
	cout << max;
}