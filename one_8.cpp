#include<iostream>
using namespace std;
//�۵����⣬����������o��Ϊ��־����oΪ0�������ǰ������Ȼ��Ҫ��ʼ����
//Ҫע���������Ҫ����ʼ�жϡ�
int main(){
	int n;
	cin >> n;
	int *a = new int [n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int t=0;
	int o;
	if (a[0] - a[1]>0){
	o = 0;}
	else{
		o = 1;
	}
	for (int i = 0; i < n-1; i++){
		if (o == 0){
			if (a[i] - a[i + 1] < 0)
			{
				t++;
				o = 1;
			}
		}
		else{
		if (a[i] - a[i + 1] > 0)
		{
			t++;
			o = 0;
		}
		    }
	}
	cout << t << endl;
}