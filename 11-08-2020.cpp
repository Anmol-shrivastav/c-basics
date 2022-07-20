#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,m,row,half,half1,a,b;
	cin>>row;
	    half = half1 = (row+1)/2;
		for(i=1; i<=row; i++)
		{
			if(i < half)
			{
				for(j=i; j<half; j++)
				{
					cout<<"	";
				}
			}
			else if(i > half)
			{
				for(n=i; n>half; n--)
				{
					cout<<"	";
				}
			}
			if(i == half || i > half)
			{
				for(a=1; a<=2*half1-1; a++)
				{
					cout<<"*	";
				}
				half1--;
			}
			if(i < half)
			{
				for(b=1; b<=2*i-1; b++)
				{
					cout<<"*	";
				}
			}
			cout<<"\n";
		}
	return 0;
}
