//hackerrank
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,k,i,j,count=0;
	cin>>n>>k;
	int ary[n];
	for(i=0; i<n; i++)
	{
		cin>>ary[i];
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			int sum = ary[i] + ary[j];
			if(i<j && sum%k == 0)
			{
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}
