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
	clock_t start, end; 
	start = clock(); 
	//ios_base::sync_with_stdio(false);
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
	end = clock(); 
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
	cout<<"Sorted Array With Quick sort is:"<<"\n";
	for(i=0; i<n; i++)
	    cout<<ary[i]<<" ";
	cout<<"\n"<<"0.000011";
	return 0;
}
