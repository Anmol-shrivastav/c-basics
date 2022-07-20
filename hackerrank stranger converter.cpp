#include<iostream>
using namespace std;
int main()
{
	int limit,v,i,t;
	cin>>t;
	limit = 3;
	for(i=1,v=3; i<=t; i++,v--)
	{
		if(i==t)
		break;
		else if(v==1)
		{
			v = (limit*2) + 1;
			limit = 2 * limit;
		}
		//cout<<"Time = "<<i<<"\n"<<"value = "<<v<<"\n";
	}
	cout<<v;
	return 0;
}
