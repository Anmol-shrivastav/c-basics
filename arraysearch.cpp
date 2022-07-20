/* Take input from user and them in array, Again ask user to give a number. Now, tell user whether that number is present in array or not  */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,index,number,found = 0;
	cout<<"Enter the index of the array = ";
	cin>>index;
	int ary[index];
	for(i=0; i<=index; i++)
	{
		cout<<"Enter the value at the index of "<<i<<" = ";
		cin>>ary[i];
	}
	cout<<"Enter the value that you want to search in the array = ";
	cin>>number;
	for(j=0; j<=index; j++)
	{
		if(ary[j] == number)
		{
			cout<<"Found at the index of = "<<j;
			found = 1;
			break;
		}
	}
    if(found == 0)
    {
    	cout<<"Not Found";
	}
	return 0;
}
