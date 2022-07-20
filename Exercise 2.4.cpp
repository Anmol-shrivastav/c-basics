//Write a program to read the value of a, b and c and display the value of x, where x= a / b - c
#include<iostream>
using namespace std;
int main()
{
	float a,b,c,x;
	cout<<"Solving the expression a / b - c" "\n";
	cout<<"Enter the value of a = ";
	cin>>a;
	cout<<"Enter the value of b = ";
	cin>>b;
	cout<<"Enter the value of c = ";
	cin>>c;
	x=(a/b)-c;
	cout<<"The value of X is = "<<x<<"\n";
	return 0;
	
}
