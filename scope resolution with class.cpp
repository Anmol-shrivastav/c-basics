 //scope resolution using class
#include<iostream>
using namespace std;
class student
{
	char name[20];
	int rollnumber;
	
	public:                                 //access specifier 
		void getdata(void);                 //function decleration
		void display(void);
};
void student :: getdata(void)              //function defination
{
	cout<<"Enter your name = " ;
	cin>>name;
	cout<<"Enter your rollnumber = " ;
	cin>>rollnumber;
	
}
void student :: display(void)              //function defination
{
	cout<<"Student name is "<<name<< "\n";
	cout<<"Student rollnumber is "<<rollnumber<< "\n";
	
}
int main()
{
	student s;
	s.getdata();
	s.display();
	return 0;
}
