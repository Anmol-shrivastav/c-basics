#include<iostream>
using namespace std;
int main()
{
	int n,i,temp;
	cin>>n;
	int ary[n], j=n;
	for(i=0; i<n; i++)
	    cin>>ary[i];
	while(j--)
	    for(i=1; i<n; i++)
	    	if(ary[i]<ary[i-1])
	        {
	        	temp = ary[i];
	        	ary[i] = ary[i-1];
	        	ary[i-1] = temp;
			}
    for(int k=0; k<n; k++)
	    cout<<ary[k]<<" ";
	return 0;	
}
