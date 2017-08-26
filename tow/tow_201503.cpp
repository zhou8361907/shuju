#include<iostream>
using namespace std;

int main()
{
		int n=0;
		cin >> n;
		int jj = 0;
		
		int* a = new int[n];
		int* b = new int[n];
		int* c = new int[n];
		
		for (int i = 0; i < n; i++)
		{	
			cin >> a[i];
		}
		b[jj] = a[jj];
		c[jj] = 1;
		jj = 1;
		for (int i = 1; i < n; i++)
		{
			for (int o = 0; o < jj; o++)
			{
				if (a[i] == b[o])
				{
					c[o]++;
					break;
				}
				if ( o == jj-1)
				{
					b[jj] = a[i];
					c[jj] = 1;
					jj++;
					break;
				}
			}
		}
		for (int i = 0; i < jj; i++)
		{
			for (int j = i + 1; j < jj; j++)
			{
				if (c[i] < c[j])
				{
					int temp = c[i];
					int b_temp = b[i];

					c[i] = c[j];
					b[i] = b[j];
					c[j] = temp;
					b[j] = b_temp;
				}
				if (c[i] == c[j])
				{
					if (b[i]>b[j])
					{
						int temp = c[i];
						int b_temp = b[i];

						c[i] = c[j];
						b[i] = b[j];
						c[j] = temp;
						b[j] = b_temp;
					}
				}

			}
		}
	

		for (int i = 0; i < jj; i++)
			cout << b[i] << " " << c[i] << endl;
	return 0;
}