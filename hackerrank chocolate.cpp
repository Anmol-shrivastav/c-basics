#include<iostream>
using namespace std;
int main()
{
	int i,t,n,c,m,count=0,newco,wrapper;
	cin>>t;
	for(i=0; i<t; i++)
	{
		cin>>n>>c>>m;
		wrapper = count = n/c;
		newco = wrapper / m;
		count = count + newco;
		wrapper = wrapper % m + newco;
		while(wrapper >= m)
		{
			newco = wrapper / m;
			count = count + newco;
			wrapper = wrapper % m + newco;
		}
		cout<<count<<"\n";
	}
}
