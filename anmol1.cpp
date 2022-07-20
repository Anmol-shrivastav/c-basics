//practice(friend function)
#include<iostream>
#include<conio.h>
using namespace std;
class Num2;
class Num1
{
	int x;
	public:
		int a;
       void getdata(void)
	   {
	        cout<<"Enter first number = ";
			cin>>a;
			x=a;	
	   }
	   friend void add(Num1, Num2);
};
class Num2
{
	int y;
	public:
		int b;
		void putdata(void)
		{
			cout<<"Enter second number = " "\n";
			cin>>b;
			y=b;
		}
		friend void add(Num1, Num2);
};
void add(Num1 obj1,Num2 obj2)
{
	cout<<"Sum of two numbers = "<<obj1.x+obj2.y<< "\n";
}
int main()
{   
    
	Num1 obj;
	Num2 Obj;
	obj.getdata();
	Obj.putdata();
	add(obj,Obj);
	return 0;
}

