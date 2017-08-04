#include<iostream>
using namespace std;
int main(){

	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int middle = -1;
	for (int i = 0; i < n; i++){
		int right=0;
		int left=0;
		for (int j = 0; j < n; j++)
		{
			if (a[i] - a[j]>0)
				left++;
			if (a[i] - a[j] < 0)
				right++;
		}
		if (left == right&&right != 0 && left != 0)
			middle = a[i];
	}
	cout << middle;
		
}