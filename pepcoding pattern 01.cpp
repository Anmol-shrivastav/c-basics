#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,m,a;
	cin>>n;
	m = n;
	for(i=1; i<=n; i++)
	{
		
		
			for(k=1; k<=i; k++)
			{
				cout<<k;
			}
			for(k=2*m-3; k>=1; k--)
			{
				cout<<" ";
			}
			m--;
			if(i == n)
			a = i-1;
			else
			a = i;
			for(; a>=1; a--)
			cout<<a;

		cout<<"\n";
	}
	return 0;
}
