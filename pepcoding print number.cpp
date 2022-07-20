#include<iostream>
using namespace std;
int main()
{
	long long int n,i,mul=1,div;
	cin>>n;
	div = n;
	while(div != 0)
	{
		div = div/10;
		mul = mul * 10;
	}
	mul = mul/10;
	while(mul != 0)
	{
		div = n/mul;
		cout<<div<<"\n";
		n = n%mul;
		mul = mul/10;
	}
	
	return 0;
}
