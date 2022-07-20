#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,k,m,n,row,half,half1;
	cout<<"Enter the number of row = ";
	cin>>row;
	half=half1=(row+1)/2;
	for(i=1; i<=row; i++)
	{
		if(i<=half)
		{
			for(j=i; j<half; j++)
			{
				cout<<" ";
			}
			for(k=1; k<=i; k++)
			{
				cout<<"*";
			}
		}
		if(i>half)
		{
			for(m=half; m<i; m++)
			{
				cout<<" ";
			}
			for(n=1; n<half1; n++)
			{
				cout<<"*";
			}
			half1--;
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
