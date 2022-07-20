//template function 
#include<iostream>
#include<conio.h>
using namespace std;
	template<class type1, class type2>
	type1 max1(type1 x, type2 y)
	{
		if(x>y)
		return x;
		else
		return y;
	}
	int main()
	{
		cout<<"Large value is = "<<max1(5,6.15)<< "\n"; // it will show 6 because the return type of max1 function is type1 and type1 is int
		cout<<"Large value is = "<<max1(5.6,6.15)<< "\n";
		cout<<"Large value is = "<<max1(5.3,6)<< "\n";
		return 0;
	}
		

