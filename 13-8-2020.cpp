#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,k,row,n;
	cout<<"Enter the number of row = ";
	cin>>row;
	n=row;
	for(i=1; i<=row; i++)
	{
		for(j=1; j<i; j++)
		{
			cout<<" ";
		}
		
		for(k=1; k<=(2*n)-1; k++)
		{
			if(i==1)
			{
				cout<<"*";
			}
			else if(k==1 || k==(2*n)-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		n--;
		cout<<"\n";
	}
	getch();
	return 0;
}
