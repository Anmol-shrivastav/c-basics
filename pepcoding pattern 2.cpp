#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=i; j<n; j++)
		  cout<<"	";
		for(j=i; j>0; j--)
		   cout<<"*	";
		cout<<"\n";
	}
	return 0;
}
