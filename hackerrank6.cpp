#include<iostream>
using namespace std;
int main()
{
	int s,t,a,b,apple=0,orange=0,m,n,i;
	cin>>s>>t>>a>>b>>m>>n;
	int apples[m],oranges[n];
	for(i=0; i<m; i++)
	{
		cin>>apples[i];
	}
	for(i=0; i<n; i++)
	{
		cin>>oranges[i];
	}
	for(i=0; i<m; i++)
	{
		if(apples[i] + a >= s && apples[i] + a <=t)
		{
			apple = apple + 1;
		}
	}
	for(i=0; i<n; i++)
	{
		if(oranges[i] + b <= t && oranges[i] + b >= s)
		{
			orange = orange + 1;
		}
	}
	cout<<apple<<"\n"<<orange;
	return 0;
}
