//Exercise 2.2 write a program to read two numbers form keyboard and display the larger value on the screen
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter first number";
	cin>>a;
	cout<<"Enter second number";
	cin>>b;
	if(a>b)
	cout<<"Greater value = "<<a<< "\n";
	else
	cout<<"Greater value = "<<b<< "\n";
	return 0;
}
