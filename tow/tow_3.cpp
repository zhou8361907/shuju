#include<iostream>
using namespace std;
int main(){

	int **a = new int*[20];
	int o = 1;
	for (int i = 0; i < 20; i++)
		a[i] = new int[6];
	for (int i = 0; i < 20; i++)
		a[i][5] = 5;
	for (int i = 0; i < 20; i++){
		for (int j = 0; j < 5; j++)
		{
			a[i][j] = o;
			o++;
		}
	}
	int n;
	cin >> n;
	int *b = new int[n];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 20; )
		{
			if (b[i] <= a[j][5]){
				for (int p = 0; p < b[i]; p++)
					cout << a[j][5 - a[j][5] + p ] << "  ";
				a[j][5] -= b[i];
				cout << endl;
				break;

			}
			else{
				j++;
			}
		}
	}


}