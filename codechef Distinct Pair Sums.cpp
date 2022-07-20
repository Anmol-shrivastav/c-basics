#include<iostream>
using namespace std;
int main()
{
	int t,num1,num2,diff;
	cin>>t;
	while(t--)
	{
	    cin>>num1>>num2;
	    if(num1 == num2)
	    {
	        cout<<1<<"\n";
	    }
	    else
	    {
	        diff = num2 - num1;
	        cout<<diff+2<<"\n";
	    }
	}
	return 0;
}
