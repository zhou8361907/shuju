#include<iostream>
using namespace std;

int main()
{ 
	int n=6;
	int j = 0;
	
	int* a = new int[n];
	int* b = new int[];
	int* c = new int[];
	for (int i = 0; i < n; i++)
	{	
		cin >> a[i];
	}
	b[j] = a[j];
	c[j] = 1;
	j = 1;
	for (int i = 1; i < n; i++)
	{
		for (int o = 0; o < j; o++)
		{
			if (a[i] == b[o])
			{
				c[o]++;
				break;
			}
			if ( o == j-1)
			{
				b[j] = a[i];
				c[j] = 1;
				j++;
				break;
			}
		}
	}
	for (int u = 0; u < j; u++)
	{
		cout << b[u] << "  " << c[u] << endl;
	}



	
}