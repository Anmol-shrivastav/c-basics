//function overloading
#include<iostream>
#include<conio.h>
using namespace std;
class Area
{
	public:
		int area(int);         //for area of square              //the parameters must be of different datatypes beacuse of this compiler will differentiate 
		int area(int, float);    //for area of rectangle         //between these functions
		float area(float, int);  //for area of traingle
};
int Area :: area(int side)
{   
    int area;
	cout<<"Enter the side of square = " "\n";
	cin>>side;
	area=side*side;
	cout<<"Area of square = "<<area<<"\n";
}
int Area :: area(int lenght, float breadth)
{
	int area;
	cout<<"Enter the lenght of rectangle = " "\n";
	cin>>lenght;
	cout<<"Enter the breadth of rectangle = " "\n";
	cin>>breadth;
	area=lenght*breadth;
	cout<<"Area of the rectangle = "<<area<<"\n";
}
float Area :: area(float base, int height)
{
	float area;
	cout<<"Enter the base of the triangle = " "\n";
	cin>>base;
	cout<<"Enter the height of the triangle = " "\n";
	cin>>height;
	area=0.5*base*height;
	cout<<"Area of the triangle is = "<<area<< "\n"; 
}
int main()
{
	Area a;
	a.area(0);
	a.area(0,0.0);
	a.area(3.4,2);
	return 0;
}









