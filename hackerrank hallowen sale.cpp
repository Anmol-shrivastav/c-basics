#include<iostream>
using namespace std;
int main()
{
	int p,d,m,s,count=0;
	cin>>p>>d>>m>>s;
	while(s>p)
	{
		if(p-d<m)
		  p=m;
		else
		  p=p-d;
		count++;
		cout<<p<<"\n";
	}

	return 0;
}
