#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int n,m,i,j,min,max=0;
	cin>>n>>m;
	int ary[m];
	for(i=0; i<m; i++)
	    cin>>ary[i];
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if(j==0)
			   min = abs(ary[j]-i);
			else if(abs(ary[j]-i)<min)
			   min = abs(ary[j]-i);
		}
		if(min>max)
		   max = min;
	}
	cout<<max;
	return 0;
}
