#include<iostream>
using namespace std;
int main()
{
	int n,div,mod;
	cin>>n;
	div = n;
	while(div != 0)
	{
		mod = div % 10;
		cout<<mod;
		div = div / 10;
	}
	return 0;
}
