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

//ccf答案
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
//	// 输入数据，判断负值是否已经存在，构建Map，统计  
//	cin >> n;
//	for (int i = 0; i<n; i++) {
//		// 输入数据  
//		cin >> v;
//
//		// 判断负值是否已经存在，构建Map，统计  
//		if (m.find(-v) == m.end())
//			m[v]++;
//		else
//			sum++;
//	}
//
//	// 输出结果  
//	cout << sum << endl;
//
//	return 0;
//}