#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=5,b=10;
	cout<<&a<<"\n";
	int *pa = &a;
	int *pb = &b;
	cout<<pa<<"\n";
	cout<<a<<"\n";
	cout<<*pa + *pb<<"\n";
	return 0;
}
