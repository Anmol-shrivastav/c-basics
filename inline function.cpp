//Inline Function.
#include<iostream>
using namespace std;

inline float mul(float x, float y)
	{
		return(x*y);
	}
	
inline double div(double x, double y)
	{
		return(x/y);
	} 
	 
int main()
	 {
	    float a=10;
	    float b=5;
	 	cout<<mul(a,b)<< "\n";
	 	cout<<div(a,b)<< "\n";
		return 0;
	 }

