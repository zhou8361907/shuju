#include<iostream>
using namespace std;

int main(){

	int n, k;
		cin>>n>>k;
	int *a = new int[n];
	int t=0,o=0;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++){
		if (t == 0&&a[i]!=0)
			o++;

		t += a[i];
		if (t >= k){
			t = 0;
		}


	}
	cout << o;
}