//call by reference
#include<iostream>
#include<conio.h>
using namespace std;
void swap(int &x, int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;n
}
int main()
{
	int a,b;
	cout<<"Enter the value of a = ";
	cin>>a;
	cout<<"Enter the value of b = "; "\n;";
	cin>>b;
	cout<<"Value of a and b before swapping is ";
	cout<<a<<"a="<<b<<"b";
	swap(a,b);
	cout<<"Value of a and b after swapping is ";
	cout<<a<<"a="<<b<<"b";
	return 0;
}
