#include<iostream>
using namespace std;
int main()
{
	int row,a=1,row1,i,j,k,m,b=1;
	cout<<"Enter the number of row = ";
	cin>>row;
	for(i=1; i<=2*row+1; i++)
	{
		if(i<=row+1)
		{
			for(j=i; j<=row; j++)
			{
				cout<<" ";
			}
			for(k=1; k<=2*i-1; k++)
			{
				if(k==1 || k==2*i-1)
				{
					cout<<"*";
				}
			    else
			    {
			    	cout<<" ";
				}
			}
		}
		else if(i>row+1)
		{
			for(m=1; m<=b; m++)
			{
				cout<<" ";
			}
			b++;
			row1 = i - 2*a;
			a++;
			for(k=1; k<=2*row1-1; k++)
			{
				if(k==1 || k==2*row1-1)
				{
					cout<<"*";
				}
			    else
			    {
			    	cout<<" ";
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}
