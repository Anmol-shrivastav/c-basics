//static variable
#include<iostream>
using namespace std;
void func()
{
	static int num=1;
	cout<<"Value of num: "<<num<<"\n";
	num++;
}
int main()
{
	func();
	func();
	func();
	return 0;
}
