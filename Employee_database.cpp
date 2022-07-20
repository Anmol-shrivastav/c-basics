/*Write a program to create a class called employee which consist name,desg,salary,
as a data member and read, write as a function member, using this class to read and print
10 employee information */
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class employee
{ 
    string name;
    string desg;
    int salary;
	public:
		void getdata();
		void showdata();
};
void employee :: getdata()
{   
	cout<<"Enter the name of employee = " "\n";
    cin>>name;
	cout<<"Enter the designation of employee = " "\n";
	cin>>desg;
	cout<<"Enter the salary of employee = " "\n";
	cin>>salary;
}
void employee :: showdata()
{
	cout<<"The name of employee is "<<name<< "\n";
	cout<<"The designation of the employee is "<<desg<< "\n";
	cout<<"Salary of the employee is "<<salary<<"\n";
}
int main()
{
	int i;
	employee e;
	cout<<"Enter the details of 5 employees" "\n";
	for(i=0;i<5;i++)
	{
	e.getdata();
    }
	for(i=0;i<5;i++)
	{
	e.showdata();
    }
	return 0;
}
