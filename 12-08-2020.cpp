#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,k,row,half,half1;
	cout<<"Enter the number of row = ";
	cin>>row;
	if(row%2!=0)
	{
		half = half1 = (row+1)/2;
		for(i=1; i<=row; i++)
		{
			if(i<half)
			{
				for(j=i; j>=1; j--)
				{
					cout<<"*";
				}
			}
			if(i==half || i>half)
			{
				for(k=half1; k>=1; k--)
				{
					cout<<"*";
				}
				half1--;
			}
			cout<<"\n";
		}
	}
	else 
	{
		cout<<"For this pattern number of row must be an odd number";
	}
	getch();
	return 0;
}
