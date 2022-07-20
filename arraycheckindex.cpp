#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,sum,index;
	int ary[10];
	cout<<"Enter the index of array should be less than 10 = ";
	cin>>index;
	for(i=0; i<=index; i++)
	{
		cout<<"Enter number at index of"<<" "<<i<<" = ";
		cin>>ary[i];
	}
	for(j=0; j<=index; j++)
	{
		cout<<"Value of array at the index of "<<j<<" = ";
		cout<<ary[j]<<"\n";
		sum = sum + ary[j];
	}
	cout<<sum;
	
	return 0;
}
