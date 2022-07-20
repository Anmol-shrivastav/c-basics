//hackerrank 16
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k=1,count=0;
	cin>>n;
	int ary[n];
	int ary1[n];
	ary1[0]=0;
	for(i=0; i<n; i++)
	  cin>>ary[i];
	for(i=0; i<n; i++)
	   for(j=0; j<n; j++)
	     if(ary[i] - ary1[j]<=1)
	       {
	       	  ary1[k] = ary[i];
	       	  k++;
		   }
	        
	for(i=0; i<n; i++)
	  if(ary1[i]!=0)
	    count++;
	    
	    cout<<count;
	 return 0;
}

