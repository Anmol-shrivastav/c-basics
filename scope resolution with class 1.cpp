//program with class
#include<iostream>
using namespace std;

class calculator
{
	public:
    int sum(int a, int b);
	int sub(int a, int b);	
};
int calculator :: sum(int a, int b)
{
	cout<<"Sum = "<<a+b<< "\n";
}
int calculator :: sub(int a, int b)
{
	cout<<"Subtraction = "<<a-b<< "\n";
}
int main()
{
	calculator s;
	s.sum(5,10);
	s.sub(20,10);
	return 0;
}
