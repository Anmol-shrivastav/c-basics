//Explicit conversion:-where the user type cast the variable as per their requriment 
//Explicit conversion can be done in two ways (a) convert by assignment and (b) by cast operators
//this program is for convert by assignment : syntax is (type)expression
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double a=1.5;
	int b;
	float c;
	b=(int)a+2;            //type conversion of 'a' from double to int 
	c=a+2;
	cout<<"B = "<<b<<"\n";
	cout<<"C = "<<c<<"\n";
	return 0;
}
