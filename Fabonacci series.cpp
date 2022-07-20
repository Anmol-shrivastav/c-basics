//Fabonacci series
#include<iostream>
using namespace std;
int main()
{
	int num=0,t1=0,t2=1,n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		if(i == 0 || i==1)
		{
			cout<<i;
		}
	}
	while(num <= n)
	{
		cout<<num;
	}
}
