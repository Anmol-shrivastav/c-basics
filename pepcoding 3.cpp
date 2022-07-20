#include<iostream>
using namespace std;

void OddEven(int num)
{
	if(num%2==0)
	cout<<"Even";
	else
	cout<<"Odd";
}
int main()
{
	int num;
	cin>>num;
	OddEven(num);
	return 0;
}
