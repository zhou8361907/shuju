#include<iostream>
using namespace std;
//动态生成二维数组;
//这是一个下标转换问题，实际上并不需要将数据另外存储。下标转换问题是程序中经常出现的问题，
//逻辑并不复杂，需要找出转换公式或函数。
int main(){

	int n, m;
	cin >> n >> m;
	int **a = new int*[n];
	for (int i = 0; i < n; i++){
		a[i] = new int[m];
	}
	int **b = new int*[m];
	for (int i = 0; i < m; i++){
		b[i] = new int[n];
	}
	for (int i = 0; i < n;i++)
	for (int j = 0; j < m; j++)
	{
		cin >> a[i][j];
	}
	for (int j = 1; j <= m; j++) {
		for (int i = 0; i<n; i++) {
			if (i != 0)
				cout << " ";
			cout << a[i][m - j];
		}
		cout << endl;
	}




}