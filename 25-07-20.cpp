//pattern
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,count=0,count1=0,k=0,row,space;
	cout<<"Enter the number of row = ";
	cin>>row;
	for(i=1; i<=row; i++) 
	{
		for(space=1; space<=row-i; space++) 
		{
			cout<<" ";		
			count++;
		}
		while(k != 2*i-1)
		{
			if(count <= row-1) 
			{
				cout<<i+k;
				count++;
			}
			else 
			{
				count1++;
				cout<<i+k-2*count1;
			}
			k++;
		}
		count1 = count = k = 0;
		cout<<"\n";
	}
	return 0;
}
