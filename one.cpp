//#include<iostream>
//using namespace std;
//
//int main()
//{ 
//	int n=0;
//	cin >> n;
//	int j = 0;
//	//���ֺܶ�δ��󣬶�̬���ɵ�ʱ�������int�����з����������������
//	int* a = new int[n];
//	int* b = new int[n];
//	int* c = new int[n];
//	for (int i = 0; i < n; i++)
//	{	
//		cin >> a[i];
//	}
//	b[j] = a[j];
//	c[j] = 1;
//	j = 1;
//	for (int i = 1; i < n; i++)
//	{
//		for (int o = 0; o < j; o++)
//		{
//			if (a[i] == b[o])
//			{
//				c[o]++;
//				break;
//			}
//			if ( o == j-1)
//			{
//				b[j] = a[i];
//				c[j] = 1;
//				j++;
//				break;
//			}
//		}
//	}
//	for (int u = 0; u < j; u++)
//	{
//		cout << b[u] << "  " << c[u] << endl;
//	}
//
//
//
//	return 0;
//}




//�½ⷨ �� �������Ƚ����������жϴ���;
#include<iostream>
#include <algorithm>  
#define maxn  1003  
using namespace std;
int s[maxn];
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i<n; i++){
		scanf("%d", &s[i]);
	}
	sort(s, s + n);
	int ans = s[0];
	int k = 0, max = 0;
	for (int i = 1; i<n; i++){
		if (s[i] == s[i - 1]){
			k++;
			if (k>max){
				max = k;
				ans = s[i];
			}
		}
		else{
			k = 0;
		}
	}
	printf("%d\n", ans);
	return 0;
}