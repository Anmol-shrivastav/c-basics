#include<iostream>
using namespace std;
int main()
{
	int t,n,i,j,temp,ci,flag=0,count=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int ary[n];
		for(i=0; i<n; i++)
		    cin>>ary[i];
		for(i=0; i<n-1; i++)
		{
			ci = i;
			for(j=i+1; j<n; j++)
			{
				if(ary[ci]>ary[j])
			    {
			    	ci = j;
			    	flag = 1;
				}
			}
			if(flag == 1)
			{
				temp = ary[ci];
				ary[ci] = ary[i];
				ary[i] = temp;
				flag = 0;
				count++;
			}
		}
		if(count%2==0)
		cout<<"YES"<<"\n";
		else
		cout<<"NO"<<"\n";
		count = 0;
		/*for(i=0; i<n; i++)
		    cout<<ary[i]<<" ";
		cout<<"\n";
		cout<<"count = "<<count<<"\n";
		count = 0;*/
	}
	return 0;
}
