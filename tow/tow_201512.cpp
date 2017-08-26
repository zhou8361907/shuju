//#include<iostream>
//using namespace std;
//int main(){
//
//	int n, m;
//	cin >> n >> m;
//	int **a = new int*[n];
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = new int[m];
//	}
//	int **b = new int*[n];
//	for (int i = 0; i < n; i++)
//	{
//		b[i] = new int[m];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//			b[i][j] = 0;
//		}
//	}
//	for(int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (i <= n-3)
//			{
//				if (a[i][j] == a[i + 1][j] && a[i][j] == a[i + 2][j])
//				{
//					b[i][j] = 1;
//					b[i+1][j] = 1;
//					b[i+2][j] = 1;
//				}
//			}
//			if (j <= m - 3)
//			{
//				if (a[i][j] == a[i][j + 1] && a[i][j] == a[i][j + 2])
//				{
//					b[i][j] = 1;
//					b[i][j + 1] = 1;
//					b[i][j + 2] = 1;
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (b[i][j] == 1)
//				a[i][j] = 0;
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}