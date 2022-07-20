#include<iostream>
using namespace std;
int main()
{
    int a,b,c,choise,sub,mul,mod;
	float d,e,div;
	cout<<"Choise 1 for addition" "\n";
	cout<<"choise 2 for subtraction" "\n";
	cout<<"choise 3 for multiplication" "\n";
	cout<<"choise 4 for division" "\n";
	cout<<"choise 5 for finding remainder" "\n";
	cout<<"choise o for exit" "\n";
	
	cout<<"Enter your choise = ";
	cin>>choise;
	
	if(choise==1)
	{
			
	
	cout<<"Enter the first number for addition = ";
	cin>>a;
	cout<<"Enter second number for addition = ";
	cin>>b;
	c=a+b;
	cout<<"sum of two numbers = " <<c<<"\n";
	
	}
	
	if(choise==2)
	{
	cout<<"Enter first number for subtration = ";
	cin>>a;
	cout<<"Enter second number for subtraction = ";
	cin>>b;
	sub=a-b;
	cout<<"Subtraction of two numbers is = " <<sub<< "\n";
	}
	
	if (choise==3)
	{
	cout<<"Enter first number for multiplication = ";
	cin>>a;
	cout<<"Enter second number for multiplication = ";
	cin>>b;
	mul=a*b;
	cout<<"Multiplication of two numbers is = " <<mul<< "\n";	
	}
	
	if(choise==4)
	{
	cout<<"Enter first number for division = ";
	cin>>d;
	cout<<"Enter second number for division = ";
	cin>>e;
	div=d/e;
	cout<<"Division of two numbers is = " <<div<< "\n";	
	}
	
	if(choise==5)
	{
	cout<<"Enter first number for division = ";
	cin>>a;
	cout<<"Enter second number for division = ";
	cin>>b;
	mod=a%b;
	cout<<"Remainder of divion of two numbers is = " <<mod<< "\n";	
	}
	
	
	else
	{
		cout<<"Exit";
	}

	

	return 0;
	
}
