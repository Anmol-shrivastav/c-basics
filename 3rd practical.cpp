//Inline Function.
#include<iostream>
using namespace std;

inline int greatest(int a, int b)
{
	if(a>b)  
	{
	    return(a);
	}  
	else {
		return(b);
	}
}
int main()
{
	cout<<"Greater Number is = "<<greatest(10,20)<< "\n";
	return 0;

}
