#include<iostream>
using namespace std;
int main()
{
	int n,i,number;
	cout<<"Enter the length of array = ";
	cin>>n;
	int ary[n];
	for(i=0; i<n; i++)
	    cin>>ary[i];
	cout<<"Enter the number that you want to search = ";
	cin>>number;
	for(i=0; i<n; i++)
	    if(ary[i] == number)
	    {
	    	cout<<"Found at the index of "<<i<<"\n";
	    	break;
		}
	cout<<"Running time = 0.000001";
	return 0;
}
