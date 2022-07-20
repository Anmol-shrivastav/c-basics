#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,k,row,n,m=1;
	cout<<"Enter the number of row = ";
	cin>>row;
	for(i=1; i<=row; i++)
	{
		for(j=i; j<row; j++)
		{
			cout<<" ";
		}
		for(k=i; k<=2*i-1; k++)
		{
			cout<<k;
		}
		if(i>1)
		{
			for(n=2*m; n>=i; n--)
			{
				cout<<n;
			}
			m++;
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
