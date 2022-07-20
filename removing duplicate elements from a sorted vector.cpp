#include<iostream>
using namespace std;
int main()
{
	int n,i,length=0;
	cin>>n;
	int ary[n];
	for(i=0; i<n; i++)
	   cin>>ary[i];
	for(i=0; i<n-1; i++)
	   if(ary[i]!=ary[i+1])
	      ary[length++] = ary[i];
	ary[length++] = ary[n-1];
	for(i=0; i<length; i++)
	    cout<<ary[i]<<" ";
	return 0;
}
