#include<iostream>
using namespace std;
int main()
{
	int n,i,j,mid,space,temp,dis;
	cin>>n;
	mid = (n + 1) / 2;
	for(i=1; i<=n; i++)
	{
		temp = i;
		if(i > (n + 1) / 2)
		{
			dis = i - (n + 1) / 2;
			temp = (n + 1) / 2 - dis;
		}
		for(j=temp; j<mid; j++)
		{
			cout<<"\t";
		}
		cout<<"*\t";
		space = 2 * (temp - 1) - 1;
		for(j=1; j<=space; j++)
		{
				cout<<"\t";
		}
		if(i!=1 && i != n)
		cout<<"*\t";
		
		cout<<"\n";
	}
	return 0;
}
