
//array searching and inserting
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,k;
    int arr1[8]={1,1,2,2,4,4,6,8};
    int arr2[4]={1,4,5,7};
    int arr3[12];
    for(i=0; i<8; i++)
    {
    	arr3[i]=arr1[i];
	}
	for(i=0,k=8;k<12&&i<4;i++,k++)
	{
		arr3[k]=arr2[i];
	}
	cout<<"Array after merging " "\n";
	for(i=0; i<12; i++)
	{
		cout<<arr3[i]<<" ";
	}
	getch();
	return 0;
}
