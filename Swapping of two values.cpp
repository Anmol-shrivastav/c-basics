//Write a program for swapping of two values 
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter first value = ";
	cin>>a;
	cout<<"Enter second value = ";
	cin>>b;
	cout<<"Values before swapping \n"<<a<< "\n"<<b<< "\n";
	swap(a,b);
	cout<<"Values after swapping \n"<<a<< "\n" <<b<< "\n";
	return 0;
}
