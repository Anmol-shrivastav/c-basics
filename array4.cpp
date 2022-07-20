//Create an array take the input from user store them in a array, create new array and store the first array in it but in the reverse order
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,n,m=0,index;
	cout<<"Enter the index of array that you want to create = ";
	cin>>index;
	int ary1[index], ary2[index];
	cout<<"Enter the values in array:"<<"\n";
	for(i=0; i<=index; i++)
	{
		cin>>ary1[i];
	}
	cout<<"Your array is:"<<"\n";
	for(j=0; j<=index; j++)
	{
		cout<<ary1[j]<<" ";
	}
	cout<<"\n"<<"Reverse order array is:"<<"\n";
	for(n=index; n>=0; n--)
	{
		ary2[m] = ary1[n];
		m++;
	}
	for(j=0; j<=index; j++)
	{
		cout<<ary2[j]<<" ";
	}
	getch();
	return 0;
}
