#include<iostream>
using namespace std;
int main()
{
	int n,i,j,start,end,temp;
	cin>>n;
	int ary[n];
	for(i=1; i<=n; i++)
	cin>>ary[i];
	cin>>start>>end;
	while(start<end)
	{
		temp = ary[start];
		ary[start] = ary[end];
		ary[end] = temp;
		start++;
		end--;
	}
	for(i=1; i<=n; i++)
	cout<<ary[i]<<" ";
	return 0;
}
