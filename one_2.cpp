#include<iostream>
using namespace std;

int main()
{

	int n = 0;
	cout << "ada";
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			int t = a[i];
			t = t + a[j];
			if (t == 0)
			{
				count++;

			}
		}
	}
	cout << count;

}

//ccf��
//#include <iostream>  
//#include <map>  
//
//using namespace std;
//
//int main()
//{
//	map<int, int> m;
//	int n, v, sum = 0;
//
//	// �������ݣ��жϸ�ֵ�Ƿ��Ѿ����ڣ�����Map��ͳ��  
//	cin >> n;
//	for (int i = 0; i<n; i++) {
//		// ��������  
//		cin >> v;
//
//		// �жϸ�ֵ�Ƿ��Ѿ����ڣ�����Map��ͳ��  
//		if (m.find(-v) == m.end())
//			m[v]++;
//		else
//			sum++;
//	}
//
//	// ������  
//	cout << sum << endl;
//
//	return 0;
//}