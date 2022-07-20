
//addition of two complex number
#include<iostream>
#include<conio.h>
using namespace std;
class compx
{
	private:
		int real1,real2,img1,img2,real,img;
		public:
			int a,b,c,d;
			void getdata(void)
			{
			
			cout<<"Enter first real part = ";
			cin>>a;
			cout<<"Enter first img part = " "\n";
			cin>>b;
			cout<<"Enter second real part = " "\n";
			cin>>c;
			cout<<"Enter second img part = " "\n";
			cin>>d;
			real1=a;
			img1=b;
			real2=c;
			img2=d;
		}
			friend void add(compx);
};

void add(compx obj1)
{
    cout<<"Sum of two complex numbers is = "<<obj1.real1+obj1.real2<<"+"<<obj1.img1+obj1.img2<<"i" "\n";
}
int main()
{
	compx obj;
	obj.getdata();
	add(obj);
	return 0;
	
}







