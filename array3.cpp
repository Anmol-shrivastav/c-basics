//Take input from the user store them in a array, Now check that how many positive,negative,odd,even and zero's are in the array.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,index,negative=0,positive=0,odd=0,even=0,zero=0;
	cout<<"Enter the length of array = ";
	cin>>index;
	int ary[index];
	for(i=0; i<=index; i++)
	{
		cout<<"Enter the value at the index of "<<i<<" = ";
		cin>>ary[i];
	}
	for(j=0; j<=index; j++)
	{
		if(ary[j] < 0)
		{
			negative = negative + 1;
		}
		if(ary[j] > 0)
		{
			positive = positive + 1;
		}
		if(ary[j] == 0)
		{
			zero = zero + 1;
		}
		if(ary[j] % 2 == 0 && ary[j] != 0)
		{
			even = even + 1;
		}
		if(ary[j] % 2 != 0)
		{
			odd = odd + 1;
		}
	}
	cout<<"Negative numbers are = "<<negative<<"\n";
	cout<<"Positive numbers are = "<<positive<<"\n";
	cout<<"Zero's are = "<<zero<<"\n";
	cout<<"Even numbers are = "<<even<<"\n";
	cout<<"Odd numbers are = "<<odd<<"\n";
	
	double posratio = positive/index;
    double negratio = negative/index;
    double zeratio = zero/index;
    cout<<posratio<<"\n";
    cout<<negratio<<"\n";
    cout<<zeratio<<"\n";
    
	getch();
	return 0;
}
