#include<iostream>
using namespace std;
int main()
{
	int n,i,j,space,total,half,temp,dis;
	cin>>n;
	for(i=1; i<=n; i++)
	{
		if(i > (n + 1) / 2){
			dis = i - (n + 1) / 2;
			temp = (n + 1) / 2 - dis;
		} else {
			temp = i;
		}
		space = 2 * temp - 1;
		total = (n + 2) - space;
		half = total / 2;
		for(j=1; j<=half; j++)
		{
			cout<<"*"<<"	";
		}
		for(j=1; j<=space; j++)
		{
			//if(j == (n+3)/2)
			//cout<<"\t";
			//else
			cout<<"		";
		}
		for(j=1; j<=half; j++)
		{
			cout<<"*"<<"	";
		}
		cout<<"\n";
	}
	return 0;
}
