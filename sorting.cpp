#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	int arr[9] = {1,1,2,2,6,8,8,8,9};
	cout<<"Enter a number that you want to find = ";
	cin>>num;
	for(int i=0;i<=8;i++)
	{
		if(arr[i]==num)
		{
			cout<<"Starting at the index of "<<i<< "\n";
			break;
		}
	
		
	}
	for(int j=8;j>=0;j--)
	{
		if(arr[j]==num)
		{
			cout<<"Ending at the index of "<<j<< "\n";
			break;
		}
	}   

	
	
	
	return 0;
	
}
