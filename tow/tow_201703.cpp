#include<iostream>
using namespace std;

int main(){


	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++){
		a[i] = i + 1;
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int p, q,q_n;
		cin >> p >> q;
		for (int o = 0; o<n; o++){
			if (p == a[o]){
				q_n = o;
				break;
			}
		}

		if (q>0){
			for (int j = 0; j < q; j++){
				int t;
				t = a[q_n + j];
				a[q_n + j] = a[q_n + j + 1];
				a[q_n + j + 1] = t;
			}
		}
		else{
			q *= -1;
			for (int j = 0; j < q; j++){
				int t;
				t = a[q_n - j];
				a[q_n - j] = a[q_n - j - 1];
				a[q_n - j - 1] = t;
			}
		}
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << "  ";

	return 0;
}