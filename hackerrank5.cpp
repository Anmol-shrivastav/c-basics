//hackerrank 5
#include<iostream>
using namespace std;
int main()
{
	int n,i,nearest;
	cin>>n;
	int ary[n];
	for(i=0; i<n; i++)
	{
		cin>>ary[i];
	}
	for(i=0; i<n; i++)
	{
		if(ary[i] >= 38)
		{
			for(nearest = ary[i]; nearest % 5 !=0; nearest++)
			{
			}
			if(nearest - ary[i] < 3)
			{
				ary[i] = nearest;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		cout<<ary[i]<<"\n";
	}
	return 0;
} 
