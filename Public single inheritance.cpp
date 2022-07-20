//single inheritance :- when a base class is derived publicly by the derived class
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
     int c=10;      //private member of class A can't be inherited
	public:
		int side=5;
		int dispside(void)
		{
			cout<<"The value of side is "<<side<< "\n";
		}
};
class B : public A
{   
    public:
    	int area;
	    int peri;
    	int disp_area(void)
    	{
    		 area=side*side;
    		 cout<<"Area of square is "<<area<<"\n";
		}
	    int disp_peri(void)
	    {
	    	   peri=4*side;
	    	   cout<<"Perimeter of square is "<<peri<<"\n";
		}
};


	

int main()
{
	B obj;
	obj.dispside();
	obj.disp_area();
	obj.disp_peri();
	
	
	return 0;
}

