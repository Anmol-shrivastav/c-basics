#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=i; j>1; j--)
		  cout<<"	";
		for(j=n; j>=i; j--)
		   cout<<"*	";
		cout<<"\n";
	}
	return 0;
}
