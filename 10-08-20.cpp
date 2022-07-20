#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,k,n,row;
	cout<<"Enter the number of row = ";
	cin>>row;
	for(i=1; i<=row; i++)
	{
		for(j=i; j<row; j++)
		{
			cout<<" ";
		}
		for(k=i; k<=(2*i)-1; k++)
		{
			if(k<=(2*i)-1)
			{
			    cout<<k;
			}
			if(k==(2*i)-1)
			{
				for(n=k-1; n>=k; n--)
				{
					cout<<n;
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}
