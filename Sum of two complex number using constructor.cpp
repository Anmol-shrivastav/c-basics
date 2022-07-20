//Sum of two complex number using constructor
#include<iostream>
using namespace std;
class complex
{
	int a,b,c,d,i,j;
	public:
		complex()                     //constructor
		{
			cout<<"Enter the real part of first complex number = ";
			cin>>a;
			cout<<"Enter the imaginary part of first complex number = ";
			cin>>b;
			cout<<"Enter the real part of second complex number = ";
			cin>>c;
			cout<<"Enter the imaginary part of second complex number = ";
			cin>>d;
			cout<<"The given complex number is" "\n";
			cout<<a<<"+"<<b<<"i"<<"\n"<<c<<"+"<<d<<"i"<<"\n";
		}
	void add()
	{
		i=a+c;
		j=b+d;
	}
	void display()
	{
		cout<<"Sum of two complex number is" "\n";
		cout<<i<<"+"<<j<<"i"<<"\n";
	}
};
int main()
{
	complex c;
	c.add();
	c.display();
	return 0;
}

