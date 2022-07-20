#include<iostream>
using namespace std;
int main()
{
	int t,i,n,j;
	cin>>t;
	for(i=0; i<t; i++)
	{
		cin>>n;
		for(j=2; j*j<n; j++)
		{
			if(n%j==0)
			break;
		}
		if((j*j)>n)
		cout<<"prime"<<"\n";
		else
		cout<<"not prime"<<"\n";
	}
	return 0;
}
