//Hackerrank question find the largest value in an array and also find that how many times that number occur's in array
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int temp=0,n,i,times=0;
	cin>>n;
	int ary[n];
	for(i=0; i<n; i++)
	{
		cin>>ary[i];
	}
	for(i=0; i<n; i++)
	{
		if(temp < ary[i])
		{
			temp = ary[i];
		}
	}
	for(i=0; i<n; i++)
	{
		if(temp == ary[i])
		{
			times++;
		}
	}
	cout<<times;
	return 0;
}
