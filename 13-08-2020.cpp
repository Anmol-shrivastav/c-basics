#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,k,row;
	cout<<"Enter the number of row = ";
	cin>>row;
	for(i=1; i<=row; i++)
	{
		for(j=i; j<row; j++)
		{
			cout<<" ";
		}
		for(k=1; k<=(2*i)-1; k++)
		{
			if(i==row)
			{
				cout<<"*";
			}
			else if(k==1 || k==(2*i)-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
