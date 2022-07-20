//factorial 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,a;
	InfInt fact=1;
	cout<<"Enter a number for finding factorial = ";
	cin>>a;
	if(a==0)
	{
		cout<<"Factorial is = 1" "\n";
	}
	else
	{
		for(i=a; i>=1; i--)
		{
			fact=fact*i;
		}
		cout<<"Factorial is = "<<fact<< "\n";
	}
	getch();
	return 0;
}
