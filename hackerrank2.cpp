//hackerrank program 2
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,n,biggest=0,smallest,largestsum=0,smallestsum=0;
	int ary[1000];
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>ary[i];
	}
	for(j=0; j<n; j++)
	{
		if(biggest < ary[j])
		{
			biggest = ary[j];
		}
	}
	cout<<"\n"<<"Largest vale is = "<<biggest<<"\n";
	smallest = biggest;
	for(j=0; j<n; j++)
	{
		if(smallest > ary[j])
		{
			smallest = ary[j];
		}
	}
	cout<<"Smallest value is = "<<smallest<<"\n";
	for(i=0; i<n; i++)
	{
		if(ary[i] != biggest)
		{
			smallestsum = smallestsum + ary[i];
		}
	}
	cout<<smallestsum<<"\n";
	for(i=0; i<n; i++)
	{
		if(ary[i] != smallest)
		{
			largestsum = largestsum + ary[i];
		}
	}
	cout<<largestsum<<"\n";
	
	return 0;
}
