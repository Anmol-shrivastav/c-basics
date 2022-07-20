//insertion sort
#include<iostream>
#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int main()
{
	int i,temp,ptr,n;
	cout<<"Enter the length of array = ";
	cin>>n;
	int ary[n];
	cout<<"Enter your array:"<<"\n";
	for(i=0; i<n; i++)
	    cin>>ary[i];
	for(i=1; i<n; i++)
	{
		temp = ary[i];
		ptr = i-1;
		while(temp<ary[ptr] && ptr>=0)
		{
			ary[ptr+1] = ary[ptr];
			ptr--;
		}
		ary[ptr+1] = temp;
	}
	cout<<"Sorted Array is:"<<"\n";
	for(i=0; i<n; i++)
		cout<<ary[i]<<" ";
	return 0;
}
