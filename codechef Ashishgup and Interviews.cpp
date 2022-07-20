#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,n,k,unsolve=0,tle=0,onesec=0;
	cin>>t;
	string ans;
	while(t--)
	{
		cin>>n>>k;
		int ary[n];
		for(int i=0; i<n; i++)
		{
			cin>>ary[i];
			if(ary[i] == -1)
			{
				unsolve+=1;
			}
			else if(ary[i] > k)
			{
				tle+=1;
			}
			else if(ary[i] == 1 || ary[i] == 0)  //for bot
			{
				onesec+=1;
			}
		}
		if(ceil(n/2) < unsolve)
		{
			ans = "Rejected";
		}
		else if(tle > 0)
		{
			ans = "Too Slow";
		}
		else if(unsolve == 0 && onesec == n) // for bot
		{
			ans = "Bot";
		}
		else
		{
			ans = "Accepted";
		}
		cout<<ans<<"\n";
		unsolve = tle = onesec = 0;
	}
	return 0;
}
