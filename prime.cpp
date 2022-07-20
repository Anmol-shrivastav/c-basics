//prime number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,i,count=0;
	cout<<"Enter a number = ";
	cin>>a;
	if((a==0)||(a==1))
	{
		cout<<"Not prime";
	}
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
		if(count==1)
		{
			cout<<"Prime number";
		}
		else
		{
			cout<<"not prime";
		}
	
	return 0;
	getch();
}
