#include<iostream>
using namespace std;
#include<string>
#include <stdio.h>
//要注意关于字符串和数字之间的相互转换：对char字符-48 即为对应数字

int main(){
	string s;
	cin >> s;
	int n=1;
	int sum=0;
	int answer=0;
	string s_ans;
	for (int i = 0; i < s.length()-1; i++)
	{
		if (s[i] != '-')
		{
			sum += ((int)s[i]-48)*n; 
			n++;
		}
	}

	answer=sum%11 ;
	char c='0';
	if (answer == 10)
		c = 'X';
	else
		c = answer + '0';


	if (c == s[s.length() - 1])
		cout << "Right"<<endl;
	else{
		s[s.length() - 1] = c;
	cout << s << endl;
	
	}

}