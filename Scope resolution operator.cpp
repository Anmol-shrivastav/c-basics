//Write a program for scope resolution operator(::)
#include<iostream>
using namespace std;
int a=20;           //Global variable defines before main function
int main()
{
	int a=10;      //Local variable defines after main function
	cout<<"The value of local variable = " <<a<<"\n";
	cout<<"The value of global variable = " <<::a<<"\n";
	return 0;
}
