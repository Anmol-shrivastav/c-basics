//practice with class
#include<iostream>
using namespace std;
class program
{
	int a,b;
    public:
    	
    	int getdata(void);
    	
    	int display(void);
};
int program :: getdata(void)

{
	cout<<"Enter the first number = " ;
	cin>>a;
	cout<<"Enter the second number = " ;
	cin>>b;

}
int program :: display(void)
{

	cout<<"Sum of two numbers = " <<a+b<< "\n";
}
int main()
{
	program o;
	o.getdata();
	
	o.display();
	return 0;
}
