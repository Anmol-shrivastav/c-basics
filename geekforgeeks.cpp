#include<iostream>
using namespace std;
int main()
{
	int n,i,min,max,k;
	cin>>k>>n;
	int ary[n];
	for(i=0; i<n; i++)
	    cin>>ary[i];
	if(n%2==0)
	{
		if(ary[0]>ary[1])
	   {
	   	    min = ary[1];
			max = ary[0];
	   }
	   else
	   {
	   	    min = ary[0];
	   	    max = ary[1];
	   }
	   i=2;
    }
	else
	{
		min = max = ary[0];
		i=1;
	}
	while(i<n-1)
	{
	    if(ary[i]>ary[i+1])
	   	{
	   	    if(max<ary[i])
	   	    	max = ary[i];
			if(min>ary[i+1]) 
			    min = ary[i+1];
		}
		else
		{
			if(ary[i]<min)
			min = ary[i];
			if(ary[i+1]>max)
			max = ary[i+1];
		}
		i=i+2;
	}
	cout<<"min = "<<min<<"\n";
	cout<<"max = "<<max<<"\n";
	min = (min-k<=0) ? min+k : min-k;
	max = (max-k<=min) ? max+k : max-k;
	cout<<"min = "<<min<<"\n";
	cout<<"max = "<<max<<"\n";
	cout<<max-min;
	return 0;
}
