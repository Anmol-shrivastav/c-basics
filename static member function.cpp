//staic data members   
#include<iostream>
using namespace std;
class test
{
	int no;
	static int count;
	public:
		void getdata(int);
		void dispcount(void);
};
void test :: getdata(int x)
{
	no=x;
	cout<<"Number= " <<no<< "\n";
	count++;                               //this will increase the value of count variable whenever the getdata fulction will count 
}
void test :: dispcount(void)
{
	cout<<"counter = "<<count<< "\n";
}
int test :: count;
int main()
{
	test t1,t2,t3;
	t1.dispcount();             /*static data member always have a common copy for all the objects*/
	t2.dispcount();               
	t3.dispcount();
	t1.getdata(20);
	t2.getdata(50);
	t3.getdata(90);
	t1.dispcount();
	t2.dispcount();
	t3.dispcount();
	return 0;
}
