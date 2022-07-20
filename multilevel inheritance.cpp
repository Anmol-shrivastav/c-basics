//Multilevel inheritance 
#include<iostream>
#include<conio.h>
using namespace std;
class student 
{
	protected:
		int roll_no=1;
		public:
		int roll(void)
		{
		
		cout<<"Your Roll number is "<<roll_no<<"\n";
	    }
};
class test : public student
{
	protected:
		int sub1=10;
		int sub2=20;
		public:
		int test_fn(void) 
		{
		
		cout<<"Your marks in subjects are" "\n";
		cout<<"Subj 1 = "<<sub1<<"\n";
		cout<<"Subj 2 = "<<sub2<<"\n";
		}
};
class totalmarks : public test 
{
	protected:
		int ttl=sub1+sub2;
		public:	
		int total(void)
		{
		
			cout<<"Total marks is "<<ttl<<"\n";
		}
		
};
int main()
{
	totalmarks obj;
	obj.roll();
	obj.test_fn();
	obj.total();
	
	
	
	return 0;
	
}





