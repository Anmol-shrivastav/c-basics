// create a class student and its object ..i/p details
#include<iostream>
#include<conio.h>
using namespace std;
class student {
	public:
	string name;
	int roll;
	int stu_info(void)  {
		cout<<"Enter student name  = ";
		cin>>name;
		cout<<"Enter Student Roll number = ";
		cin>>roll;
	}
	int dispdetails(void)  {
		cout<<"****** Student Details Are:- ******" "\n";
		cout<<"Student Name = "<<name<< "\n";
		cout<<"Student Roll Number = "<<roll< "\n";
	}
};
int main()
{
	student obj;
	obj.stu_info();
	obj.dispdetails();
	getch();
	return 0;
}
