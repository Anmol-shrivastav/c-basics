//hackerrank program
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		string s;
		string s1,s2;
		cin>>s;
		for(int j=0; j<s.size(); j++)
		{
			if(j % 2 == 0)
			{
				s1 = s1 + s[j];
			}
			else
			{
				s2 = s2 + s[j];
			}
		}
		cout<<s1<<" "<<s2<<"\n";
	}
	return 0;
}
