//hackerrank cavity problem
#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	char ary[n][n];
	for(i=0; i<n; i++)
	    for(j=0; j<n; j++)
	        cin>>ary[i][j];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
	    {
	    	if(i==0 || i==n-1 || j==0|| j==n-1)
	    	  cout<<ary[i][j];
	    	else
	    	{
	    	    if(ary[i][j]>ary[i-1][j] && ary[i][j]>ary[i+1][j] && ary[i][j]>ary[i][j-1] && ary[i][j]>ary[i][j+1])
	    	      cout<<'X';
	    	    else
	    	      cout<<ary[i][j];
			}
		}
		cout<<"\n";
	}
	return 0;
}
