#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,row;
	cout<<"Enter number of row = ";
	cin>>row;
	for(i=1; i<=row; i++)
	{
		for(j=i; j>=1; j--)
		{
			cout<<i<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
