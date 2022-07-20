//single inheritance:- class A is inherited by class B privatly
#include<iostream>
#include<conio.h>
using namespace std;
class A
{   
    public:
	
	int side; 
    int showside(void)
	{
		cout<<"Enter the side of square = ";
		cin>>side;
	}                     
		
};
class B : private A
{
	public:
		int disparea(void)
		{   
		    int area;
            showside();
			area=side*side;
			cout<<"Area of square is "<<area<<"\n";
		}
		int dispperi(void)
		{
		    int peri;   
	        showside();
			peri=4*side;
			cout<<"Perimeter of square is "<<peri<< "\n";
		}
};
int main()
{
	B obj;
	obj.disparea();
	obj.dispperi();
	
	return 0;
}

