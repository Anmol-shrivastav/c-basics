//selection sort
#include<iostream>
#include<time.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,temp,ci;
	cout<<"Enter the length of array = ";
	cin>>n;
	int ary[n];
	cout<<"Enter your array:"<<"\n";
	for(i=0; i<n; i++)
	    cin>>ary[i];
	for(i=0; i<n-1; i++)
	{
		ci = i;
		for(j=i+1; j<n; j++)
		    if(ary[ci]>ary[j])
		       ci = j;
		temp = ary[ci];
		ary[ci] = ary[i];
		ary[i] = temp;
	}
	cout<<"Sorted Array is:"<<"\n";
	for(i=0; i<n; i++)
	    cout<<ary[i]<<" ";
	return 0;
}
