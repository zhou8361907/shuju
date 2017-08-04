#include<iostream>
using namespace std;
//折点问题，我这里用了o作为标志，若o为0则代表以前是升序然后要开始降序。
//要注意的问题是要做初始判断。
//第二种方法：判断当前点是否比左右两个点都大或都小，若是则为折点
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