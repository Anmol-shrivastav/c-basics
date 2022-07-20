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
		n=row;
		for(j=1; j<i; j++)
		{
			cout<<" ";
		}
		for(k=2*n-1; k>=2*i-1; k--) 
		{
			cout<<"*";
		}
		n--;
		cout<<"\n";
	}
	return 0;
}
