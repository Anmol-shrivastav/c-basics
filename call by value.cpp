//call by value
#include<iostream>
#include<conio.h>
using namespace std;
void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{ 
	int x,y;
	cout<<"Enter value for x = ";
	cin>>x;
	cout<<"Enter value for y = ";
	cin>>y;
	cout<<"before swapping" "\n";
	cout<<"x = " <<x<< "\n";
	cout<<"y = " <<y<< "\n";
	swap(x,y);
	cout<<"After swapping" "\n";
	cout<<"x = " <<x<< "\n";
	cout<<"y = " <<y<< "\n";
	return 0;
}
