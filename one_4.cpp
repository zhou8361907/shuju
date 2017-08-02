#include<iostream>
using namespace std;
struct door{
	int id;
	int num=1;
};
int main(){
	int n;
	cin >> n;
	door *d = new door[n];
	for (int i = 0; i < n; i++)
	{
		cin >> d[i].id;
	}
	d[0].num = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++){
			if (d[i].id == d[j].id)
			{
				d[i].num++;

			}
		}

	}
	for (int i = 0; i < n; i++)
		cout << d[i].num << " ";


}