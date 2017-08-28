#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[100][100];
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
			a[i][j] = 0;
	}
	cin >> n;
	int x1, x2, y1, y2;
	int area=0;
	for (int o = 0; o < n; o++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = 0; i < x2-x1; i++)
		{
			for (int j = 0; j < y2-y1; j++)
			{
				a[x1+i][y1+j]+=1;
			}
		}
	
	}

	for (int i = 0; i < 100; i++){
		for (int j = 0; j < 100; j++)
		{
			
			if (a[i][j] != 0){
				area++;
			}		
		}
	}
	cout << area;
}