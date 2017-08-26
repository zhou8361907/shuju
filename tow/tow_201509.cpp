#include<iostream>
using namespace std;

int main()
{
	int y, d;
	cin >> y >> d;
	int a[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		a[1] = 29;
	int n=d,o=0;
	while (n > 0)
	{
		n -= a[o];
		o++;
	}
	int yy = a[o - 1] + n;

	cout << o << endl;
	cout << yy << endl;
	




	return 0;
}