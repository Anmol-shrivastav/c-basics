// Create an array and find the biggest and smallest value of the array.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,index,temp=0;
	cout<<"Enter the number of index = ";
	cin>>index;
	int ary[index];
	cout<<"Enter the values in array:"<<"\n";
	for(i=0; i<=index; i++)
	{
		cin>>ary[i];
	}
	cout<<"Your array is:"<<"\n";
	for(i=0; i<=index; i++)
	{
		cout<<ary[i]<<" ";
	}
	for(j=0; j<=index; j++)
	{
		if(temp < ary[j])
		{
			temp = ary[j];
		}
	}
	cout<<"\n"<<"Largest vale is = "<<temp<<"\n";
	for(j=0; j<=index; j++)
	{
		if(temp > ary[j])
		{
			temp = ary[j];
		}
	}
	cout<<"Smallest value is = "<<temp<<"\n";
	
	getch();
	return 0;
}
