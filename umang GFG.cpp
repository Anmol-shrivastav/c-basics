//Find smallest missing positive integer
#include<iostream>
using namespace std;
int main()
{
	int i,n,ans=100000000;
	cin>>n;
	int ary[n];
	for(i=0; i<n; i++)
	    cin>>ary[i];
    if(n==1)
    {
        if(ary[0]>1 || ary[0]<1)
        cout<<1;
        else if(ary[0]==1)
        cout<<2;
    }
    int l = sizeof(ary) / sizeof(ary[0]);
    sort(ary, ary + n);
    for(i=0; i<=(n-2); i++)
	{
		if(ary[i]+1 < ary[i+1])
		{
			if(ary[i]>=0 && ary[i] + 1 < ans)
			{
				ans = ary[i] + 1;
			}
			else if(ary[i]<=0 && ary[i+1]>1)
			{
			    ans = 1;
			}
			else if(ary[i+1]>0 && ary[i+1]-1>0 && ary[i+1] - 1 < ans)
			{
				ans = ary[i+1] - 1;
			}
		}
	}
	if(ans == 100000000)
	   ans = ary[n-1] + 1;
    cout<<ans;
	return 0;
}
