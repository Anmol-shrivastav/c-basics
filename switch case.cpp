//Calculator using switch case
#include<iostream>
#include<conio.h>
using namespace std;
class calculator
{   float a,b;
	public:
		float sum(void);
		float subtract(void);
		float mul(void);
		float div(void);
};
float calculator :: sum(void)
{
	cout<<"Enter first number = ";
	cin>>a;
	cout<<"Enter second number = ";
	cin>>b;
	cout<<"Sum of two numbers = "<<a+b<<"\n";
}
float calculator :: subtract(void)
{
	cout<<"Enter first number = ";
	cin>>a;
	cout<<"Enter second number = ";
	cin>>b;
	cout<<"Subtraction of two numbers = "<<a-b<<"\n";
}
float calculator :: mul(void)
{
	cout<<"Enter first number = ";
	cin>>a;
	cout<<"Enter second number = ";
	cin>>b;
	cout<<"Multiplication of two numbers = "<<a*b<<"\n";
}
float calculator :: div(void)
{
	cout<<"Enter first number = ";
	cin>>a;
	cout<<"Enter second number = ";
	cin>>b;
	cout<<"Division of two numbers = "<<a/b<<"\n";
}
int main()
{
calculator c;
int choice;
cout<<"1 for addition \n2 for subtraction \n3 for multiplication \n4 for division \n0 for EXIT" "\n";
cout<<"Enter your choice = ";
cin>>choice;
while(choice!=0)
{
    
	switch(choice)
	{
		case 1:
			c.sum();
			break;
		
		case 2:
			c.subtract();
			break;
			
		case 3:
			c.mul();
			break;
		
		case 4:
			c.div();
			break;
		default:
			cout<<"Wrong input" "\n";

	}
	cout<<"1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division \n 0 for EXIT" "\n";
	cout<<"Enter your choice = " "\n";
    cin>>choice;
}

return 0;
getch();
}










