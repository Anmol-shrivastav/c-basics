#include<iostream>
using namespace std;

void Pattern(int n)
{
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(j==i || j==n-i+1)
			cout<<"*\t";
			else
			cout<<"\t";
		}
		cout<<"\n";
	}
}
int main()
{
	int n;
	cin>>n;
	Pattern(n);
	return 0;
}
