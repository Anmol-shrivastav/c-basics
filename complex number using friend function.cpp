//Addition of two complex number using friend function
#include<iostream>
#include<conio.h>
using namespace std;
class cpmx
{
	private:
		int real1,imag1,real2,imag2;
	public:
		int getdata1(void)
		{
			cout<<"Enter the real part of complex1 = " "\n";
			cin>>real1;
			cout<<"Enter the imag part of complex1 = " "\n";
			cin>>imag1;
		}
		int getdata2(void)
		{
			cout<<"Enter the real part of compulex2 = " "\n";
			cin>>real2;
			cout<<"Enter the imag part of complex2 = " "\n";
			cin>>imag2;
		}
		
	friend int add(cpmx,cpmx);                  //we will create two objects therefore argument name have to same with class name
};
int add(cpmx c1, cpmx c2)
{
	cout<<c1.real1+c2.real2<<"+"<<c1.imag1+c2.imag2<<"i"<<"\n";
	
}
int main()
{
	cpmx a,b;
	a.getdata1();
	b.getdata2();
	add(a,b);
	return 0;
	
}















