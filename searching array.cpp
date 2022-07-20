//array searching and inserting
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,k,j,temp,n=12;
    int arr1[8]={1,1,2,2,4,4,6,8};
    int arr2[4]={1,4,5,7};
    int arr3[12];
    int arr4[7];
 
    //starting code for searching 
    for(i=0;i<4;i++)
    {
    	cout<<"Searching for the element "<<arr2[i]<< "\n";
    	for(j=0; j<8; j++)
    	{
    		if(arr2[i]==arr1[j])
    		cout<<"Found at the index of "<<j<< "\n";
		}
		
	}
	cout<<"both elements are not found" "\n";


    //starting code for merging
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
	cout<<"\n";
	
	//staring code for sorting
	for(i=0; i<12; i++)
	{
		for(j=i+1; j<12; j++)
		{
			if(arr3[i]>arr3[j])
			{
				temp=arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=temp;
			}
		}
	}
	cout<<"sorted array is " "\n";   //for printing the sorted array
	for(i=0; i<12; i++)
	{
		cout<<arr3[i]<<" ";
	}
	cout<<"\n";
	
	//starting code for removing of duplicate entries
	for(i=0; i<12; i++)
	{
		for(j=1; j<11; j++)
		{
			if(arr3[i]==arr3[j])
			{
				for(k=j+1; k<n;k++)
				{
					arr3[k-1]=arr3[k];
					j--;
					n--;
				}
			}
		}
	
	}
	
	cout<<"Final array is " "\n";
	for(i=0; i<12; i++)
	{
		cout<<arr3[i]<<" ";
	}	
	
	getch();
	return 0;
}
