#include<iostream>
using namespace std;
//��̬���ɶ�ά����;
//����һ���±�ת�����⣬ʵ���ϲ�����Ҫ����������洢���±�ת�������ǳ����о������ֵ����⣬
//�߼��������ӣ���Ҫ�ҳ�ת����ʽ������
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