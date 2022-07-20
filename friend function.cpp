//friend function
#include<iostream>
#include<conio.h>
using namespace std;
class A;  // decleration of class (also known as forward decleration of class)
class B 
{
	int b;
	public:
		void getval(int x)
		{
			b=x;
		}
		void dispval()
		{
			cout<<"B = "<<b<<"\n";
		}
    friend void add(A,B);        //we will create objects of class A and B by using these argument
};
class A
{
	int a;
	public:
	    void getval(int x)
		{
		   a=x;
		} 
		void dispval()
		{
			cout<<"A = "<<a<<"\n";
		}
	friend void add(A,B);
};
void add(A obj1, B obj2)
{
	cout<<"Addition of two numbers = " <<obj1.a+obj2.b;
}
int main()
{
	A a;
	B b;
	a.getval(100);
	b.getval(200);
	a.dispval();
	b.dispval();
	add(a,b);
	return 0;
	getch();
}



















