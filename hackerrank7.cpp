#include<iostream>
using namespace std;
int main()
{
	int x1,v1,x2,v2,i;
	cin>>x1>>v1>>x2>>v2;
	if(x1 == x2 && v1 == v2)
	   cout<<"YES";
	else if(x1 < x2)
	{
		while(x1 < x2)
		{
			x1 = x1+v1;
			x2 = x2+v2;
		}
		(x1 == x2) ? cout<<"YES" : cout<<"NO"; 
	}
	else if(x1 > x2)
	{
		while(x1 > x2)
		{
			x1 = x1+v1;
			x2+=v2;
		}
	    (x1 == x2) ? cout<<"YES" : cout<<"NO";
	}
	return 0;
}
