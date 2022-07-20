//static member functions
#include<iostream>
#include<conio.h>
using namespace std;
class test
{
	int no;
	static int count;                            //static data member or static variable
	public:
		void setno(void);
		void dispno(void);
		static void dispcount(void);             //static member fnction or static function 
};
void test :: setno(void)
{
	no=count++;
}
void test :: dispno(void)
{
	cout<<"Number = "<<no<<"\n";
}
void test :: dispcount(void)
{
	cout<<"Counter = "<<count<<"\n";
}
int test :: count;                      //static varialbe must me define outside the class 
int main()
{
	test t1,t2,t3;
	t1.dispcount();               //static member function can be call by using objects and as well as
	test :: dispcount();             //using class name with scope resoluction operator 
	t3.dispcount();
	t1.setno();
	t2.setno();
	t3.setno();
	t1.dispno();
	t2.dispno();
	t3.dispno();
	t1.dispcount();
	t2.dispcount();
	t3.dispcount();
	return 0;
}
