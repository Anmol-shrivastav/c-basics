#include<iostream>
using namespace std;
int main()
{
	int n,q,r,i,j,temp;
	cin>>n>>r>>q;
	int ary[n];
	for(i=0; i<n; i++)
	  cin>>ary[i];
	for(i=0; i<r; i++)
	{
		temp = ary[n-1];
		for(j=n-1; j>0; j--)
		   ary[j] = ary[j-1];
	    ary[0] = temp;
	}
	for(i=0; i<q; i++)
	{
		cin>>temp;
		cout<<ary[temp]<<"\n";
	}
	return 0;	
}
