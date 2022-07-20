#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int ary[n];
		for(int i=0; i<n; i++)
		{
			cin>>ary[i];
		}
		long long int l = sizeof(ary) / sizeof(ary[0]);
		sort(ary,ary+l);
		if(n % 2 == 0)
		{
			long long int m = (n + 2) / 2;
			m = m - 1;
			long long int ans = abs(ary[0] - ary[m]) + abs(ary[m] - ary[n-1]) + abs(ary[n-1] - ary[0]);
			cout<<ans<<"\n";
		} 
		else 
		{
			long long int m = (n + 1) / 2;
			m = m - 1;
			long long int ans = abs(ary[0] - ary[m]) + abs(ary[m] - ary[n-1]) + abs(ary[n-1] - ary[0]);
			cout<<ans<<"\n";
		}
	}
	return 0;
}
