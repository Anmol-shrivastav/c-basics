#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,row,j,k;
	cout<<"Enter the number of row = ";
	cin>>row;
	for(i=1; i<=row; i++)
	{
		for(j=row; j>i; j--)
		{
			cout<<" ";
		}
		for(k=i; k>=1; k--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
