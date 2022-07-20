#include<iostream>
using namespace std;
int main()
{
	int i,n,b,w,bc,wc,z;
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>b>>w>>bc>>wc>>z;
		if(bc+z<wc)
		   cout<<(b*bc)+(w*bc)+(z*w)<<"\n";
		else if(wc+z<bc)
		   cout<<(wc*b)+(wc*w)+(z*b)<<"\n";
		else
		   cout<<(bc*b)+(wc*w)<<"\n";
	}
	return 0;
}
