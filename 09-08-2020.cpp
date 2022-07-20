#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,row,n;
	cout<<"Enter the number of row  = ";
	cin>>row;
	n=row;
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=n; j++)
		{
			cout<<"*";
		}
		n--;
		cout<<"\n";
	}
}
